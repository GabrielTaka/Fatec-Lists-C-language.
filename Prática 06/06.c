#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <conio.h>



int main(){
    setlocale(LC_ALL,"portuguese");
    FILE *p;
    char frase [100];
    p = fopen("notas.txt", "r");
    if(p==NULL){
        printf("Erro, impossível abrir o arquivo");
        exit(1);
    }
    else{
        while(!feof(p)){
            fgets(frase,100,p);
            printf("%s\n", frase);
        }

    }
}
