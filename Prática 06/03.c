#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <conio.h>

main(){
    setlocale(LC_ALL,"portuguese");
    char x [100];
    FILE *p;
    int i = 1;
    p = fopen("codigo.txt", "r");
    if(p==NULL){
        printf("Impossível abrir o arquivo.");
        exit(1);
    }
    else{
        while(!feof(p)){
            fgets(x,100,p);
            printf("LINHA %d: %s",i ,x);
            i++;
    }
        getch();
        fclose(p);
    }

}


