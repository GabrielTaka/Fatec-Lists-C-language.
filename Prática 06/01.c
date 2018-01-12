#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <stdlib.h>


main(){
    setlocale(LC_ALL,"portuguese");
    int i =1;
    FILE *p;
    p = fopen("dados.txt", "w");
    if(p == NULL){
        printf("Impossível abrir o arquivo.");
        exit(1);
    }
    else{
        while (i != 101){
            if(i!=100){
            fprintf(p,"%d\n",i);
            i++;
            }
            else{
                fprintf(p,"%d", i);
                i++;
            }
        }
        getch();
        fclose(p);
    }

}
