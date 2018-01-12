#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <conio.h>


main(){
    setlocale(LC_ALL,"portuguese");
    int i = 1;
    int frase;
    FILE *p;
    p = fopen("dados.txt", "r");
    if(p==NULL){
        printf("Erro, impossível abrir o arquivo.");
        exit(1);
    }
    else{
        while(!feof(p)){
            fscanf(p, "%d", &frase);
            printf("Linha %d: %d\n", i , frase);
            i++;
        }
        getch();
        fclose(p);
    }
}
