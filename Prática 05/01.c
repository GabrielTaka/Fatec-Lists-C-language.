#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <conio.h>

void menu();
void cadastrar();
void procuravalor();
void procuramarca();
void procuraespecifica();

struct carros{
    char marca [15];
    int ano;
    char cor [10];
    float preco;
};
struct carros vetcarros[20];

void menu(){
    int num;
    do{
        printf("\n\tBEM VINDO A CONSSECIONÁRIA!\n");
        printf("\n<1> Cadastrar carros.\n");
        printf("\n<2> Procurar carros por valor máximo.\n");
        printf("\n<3> Procurar por marca.\n");
        printf("\n<4> Procura específica.\n");
        printf("\n<5> Sair do programa. \n");
        printf("\nEntre com a opção desejada: ");
        scanf("%d", &num);
    }while(num!=1 && num!=2 && num!=3 && num != 4 && num!=5);
    switch (num){
        case (1):
                cadastrar();
                break;
        case (2):
                procuravalor();
                break;
        case (3):
                procuramarca();
                break;
        case (4):
                procuraespecifica();
                break;
        case(5):
                return 0;
    }
}
void cadastrar(){
    int i, x = 1;
    for(i = 0; i < 20; i++){
        printf("\nCadastrando o %d° carro.\n", x);
        printf("\n\nInsira a marca: ");
        scanf("%s", &vetcarros[i].marca);
        printf("Insira o ano: ");
        scanf("%d", &vetcarros[i].ano);
        printf("Insira a cor: ");
        scanf("%s", &vetcarros[i].cor);
        printf("Insira o preço: ");
        scanf("%f", &vetcarros[i].preco);
        x++;
    }
    menu();
}
void procuravalor(){
    float valor;
    int i, x = 0;
    printf("\nInsira o valor máximo: ");
    scanf("%f", &valor);
    for(i = 0; i < 20; i++){
        if(vetcarros[i].preco <= valor){
            printf("\nMarca: %s", vetcarros[i].marca);
            printf("\nCor: %s", vetcarros[i].cor);
            printf("\nAno: %d", vetcarros[i].ano);
            printf("\nValor:R$ %.2f", vetcarros[i].preco);
        }
    }
    menu();
}
void procuramarca(){
    char tipo [15];
    int i, x= 1;
    printf("\nInsira a marca desejada: ");
    scanf("%s", &tipo);
    for(i = 0; i < 20; i++){
        if((strcmp(tipo, vetcarros[i].marca))== 0){
                printf("\n%d° opção de veículos dessa marca.\n", x);
                printf("\nPreço: %.2f", vetcarros[i].preco);
                printf("\nAno: %d", vetcarros[i].ano);
                printf("\nCor: %s", vetcarros[i].cor);
        }
        else
            printf("\nNão há nenhum veículo dessa marca.");
    }
    menu();
}
void procuraespecifica(){
    char tipo [15], cores [10];
    int i, tempo, x = 1, count = 0;
    printf("Insira a marca desejada: ");
    scanf("%s", &tipo);
    printf("Insira a cor desejada: ");
    scanf("%s", &cores);
    printf("Insira o ano dessejado: ");
    scanf("%d", &tempo);
    for(i = 0; i < 20; i ++){
        if((strcmp(tipo,vetcarros[i].marca)==0) && (strcmp(cores, vetcarros[i].cor)==0) && tempo == vetcarros[i].ano){
            printf("%d° primeira opção de veículo.");
            printf("Preço: %2.f", vetcarros[i].preco);
            count++;

        }
        else if( count == 0)
            printf("Não há nenhum veículo desse modelo em nosso estoque.");
    }
    menu();
}
int main(){
    setlocale(LC_ALL,"portuguese");
    menu();
}
