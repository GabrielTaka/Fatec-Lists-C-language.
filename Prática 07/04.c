#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <stdlib.h>

main(){
    setlocale(LC_ALL,"portuguese");
    int num [100];
    int i;
    for(i=0;i<10;i++){
        printf("Digite o %d� n�mero: ", i + 1);
        scanf("%d", &num[i]);
    }

    FILE *p;
    p = fopen("numeros.txt", "w");
    if(p==NULL){
        printf("Erro, imposs�vel abrir o arquivo.");
        exit(1);
    }
    else{
        int aux;
        aux = num[0];
        for(i=0;i<100;i++){
            if(aux<num[i]){
                aux = num[i];
            }
        }
        printf("O maior n�mero encontrado �: %d", aux);
        fprintf(p,"O maior n�mero encontrado �: %d", aux);
    }
    getch();
    fclose(p);

}
