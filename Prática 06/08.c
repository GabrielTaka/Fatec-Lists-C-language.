#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

main(){
    setlocale(LC_ALL,"portuguese");
    FILE *arquivo;
    arquivo = fopen("texto.txt", "r");
    char palavra [100];
    char linha [100];
    char *x;
    int count = 1;
    int count2 = 0;
    if(arquivo == NULL){
       printf("Erro, impossível abriro arquivo.");
        exit(1);
       }
    else{
        printf("Insira a palavra desejada: ");
        gets(palavra);
        while(!feof(arquivo)){
            fgets(linha,100,arquivo);
            if((x=strstr(linha,palavra)) != NULL){
                printf("LINHA %d: %s", count , linha);
                count2++;
            }
            count++;
        }
        if(count2==0){
            printf("A palavra digita não está contida no texto");
        }
        getch();
        fclose(arquivo);

    }
}
