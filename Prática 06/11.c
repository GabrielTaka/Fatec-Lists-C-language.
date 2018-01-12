#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

struct endereco{
    char rua [100];
    char numrua [10];
    char bairro [20];
    char cep [20];
    char cidade [20];
    char estado [20];
    char pais [20];
};
struct telefone{
    char ddd [10];
    char numtelefone [20];
};

struct agenda{
    char nome [100];
    char email [100];
    struct endereco end;
    struct telefone endl;
    char obs [100];
};

struct agenda vetagenda[10];

void busca_nome (struct agenda vetagenda[1]);

void busca_nome (struct agenda vetagenda[1]){
    int i;
    char palavra [100];
    char *x;
    int count = 0;
    printf("Digite o nome para procura: ");
    gets(palavra);
    for(i = 0; i < 10; i++){
        x = strstr(vetagenda[i].nome,palavra);
        if(x != NULL){
            printf("\n\n%s\n\n", vetagenda[i].nome);
            printf("%s\n", vetagenda[i].email);
            printf("%s\n", vetagenda[i].end.rua);
            printf("%s\n", vetagenda[i].end.numrua);
            printf("%s\n", vetagenda[i].end.bairro);
            printf("%s\n", vetagenda[i].end.cep);
            printf("%s\n", vetagenda[i].end.cidade);
            printf("%s\n", vetagenda[i].end.estado);
            printf("%s\n", vetagenda[i].end.pais);
            printf("%s\n", vetagenda[i].endl.ddd);
            printf("%s\n", vetagenda[i].endl.numtelefone);
            count++;
        }
    }
    if(count == 0){
        printf("Esse nome não está contido na agenda.");
    }

}


main(){
    setlocale(LC_ALL,"portuguese");
    FILE *arquivo;
    arquivo = fopen("agenda.txt", "w");
    int i;
    int x;
    for(i = 0; i<10; i++){
        printf("Digite o nome: ");
        gets(vetagenda[i].nome);
        fprintf(arquivo, "Nome: %s\n\n", vetagenda[i].nome);

        printf("Digite o e-mail: ");
        gets(vetagenda[i].email);
        fprintf(arquivo,"E-mail:%s\n",vetagenda[i].email);

        printf("Digite o nome da Rua: ");
        gets(vetagenda[i].end.rua);
        fprintf(arquivo,"Nome da Rua: %s\n", vetagenda[i].end.rua);

        printf("Digite o número da casa: ");
        gets(vetagenda[i].end.numrua);
        fprintf(arquivo, "Número da casa: %s\n", vetagenda[i].end.numrua);

        printf("Digite o nome do bairro: ");
        gets(vetagenda[i].end.bairro);
        fprintf(arquivo,"Bairro: %s\n", vetagenda[i].end.bairro);

        printf("Digite o CEP: ");
        gets(vetagenda[i].end.cep);
        fprintf(arquivo,"CEP: %s\n", vetagenda[i].end.cep);

        printf("Digite o nome da cidade: ");
        gets(vetagenda[i].end.cidade);
        fprintf(arquivo, "Cidade: %s\n", vetagenda[i].end.cidade);

        printf("Digite o nome do estado: ");
        gets(vetagenda[i].end.estado);
        fprintf(arquivo, "Estado: %s\n", vetagenda[i].end.estado);

        printf("Digite o pais: ");
        gets(vetagenda[i].end.pais);
        fprintf(arquivo,"País: %s\n", vetagenda[i].end.pais);

        printf("Digite o DDD: ");
        gets(vetagenda[i].endl.ddd);
        fprintf(arquivo, "DDD: %s\n", vetagenda[i].endl.ddd);

        printf("Digite o número de telefone: ");
        gets(vetagenda[i].endl.numtelefone);
        fprintf(arquivo,"Númedo de telefone: %s\n", vetagenda[i].endl.numtelefone);

        printf("Adicione uma observação: ");
        gets(vetagenda[i].obs);
        fprintf(arquivo, "Observação: %s\n", vetagenda[i].obs);
        fprintf(arquivo,"------------------------------------------\n\n");
        }
    busca_nome(vetagenda);
    }
