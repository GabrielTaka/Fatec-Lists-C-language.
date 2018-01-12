#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

main(){
    setlocale(LC_ALL,"portuguese");
    int i;
    char x [100];
    FILE *p;
    p = fopen("editor.txt","w");
    if(p==NULL){
        printf("Impossível abrir o arquivo.");
        exit(1);
    }
    else{
        printf("\tBEM VINDO AO EDITOR DE TEXTO!\n\n");
        printf("Nota: Cada linha possui 100 letras.\n\n");
        printf("O texto terá no máximo 50 linhas.\n\n");
        printf("Digite a palavra 'FIM' quando desejar finalizar o texto\n\n");
        printf("O seu texto será armazenado em um arquivo chamado (editor.txt)\n\n");
        printf("Texto: \n");
        for(i = 0; i < 5; i++){
        gets(x);
        if(strcmp(x,"FIM")==0){
            break;
        }
        fprintf(p,x);
        fprintf(p, "\n");
        }
        getch();
        fclose(p);
        }
    }
