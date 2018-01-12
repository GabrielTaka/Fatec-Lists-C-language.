#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
char cripto (char frase[100]);

char cripto (char frase[100]){
    FILE *z;
    z = fopen("cripto.txt", "w+");
    if(z == NULL){
        printf("Erro, impossível abrir o arquivo.");
        exit(1);
    }
    else{
        int tamanho;
        tamanho = strlen(frase);
        int i;
        for(i = 0; i < tamanho; i++){
            frase[i] = frase[i] + 1;
            frase[tamanho] = '\0';
    }
        fprintf(z, "%s", frase);
    }

}

main(){
    setlocale(LC_ALL,"portuguese");
    char frase [100];
    FILE *p;
    p = fopen("cripto.txt" ,"r");
    if(p==NULL){
        printf("Erro, impossível abrir o arquivo.");
        exit(1);
    }
    else{
        while(!feof(p)){
            fgets(frase,100,p);
            cripto(frase);
        }

    }
    getch();
    fclose(p);



}
