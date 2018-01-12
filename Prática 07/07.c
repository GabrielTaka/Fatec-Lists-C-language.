#include <stdio.h>
#include <locale.h>
#include <conio.h>

struct animal {
    char nome [15];
    char peso [10];
};

struct animal vetanimais[10];
main(){
    setlocale(LC_ALL,"portuguese");
    FILE *p;
    p = fopen("animais.txt", "w");
    if(p == NULL){
        printf("Erro, impossível abrir o arquivo.");
        exit(1);
    }
    else{
        int i;
        for(i = 0; i < 10; i ++){
            printf("Digite o nome do %d° animal: ", i + 1);
            gets(vetanimais[i].nome);
            fprintf(p,"Nome do primeiro animal: %s \n", vetanimais[i].nome);
            printf("Digite o peso: ");
            gets(vetanimais[i].peso);
            fprintf(p,"Peso do animal: %s \n", vetanimais[i].peso);
            fprintf(p,"---------------------------------");
        }
    }


}
