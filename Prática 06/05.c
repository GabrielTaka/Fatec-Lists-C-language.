#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <stdlib.h>
struct nota{
    char nome [100];
    float nota1;
    float nota2;
    float media;

};
struct nota vetnotas[3];
main(){
    setlocale(LC_ALL,"portuguese");
    int i;
    float mediafinal = 0;
    int  x = 1;
    FILE *p;
    p = fopen("notas.txt","w");
    if(p==NULL){
        printf("Impossível abrir o arquivo.");
        exit(1);
    }
    else{
        for(i = 0; i < 3; i ++){
            printf("Digite o nome do %d° aluno: ", x);
            scanf("%s", &vetnotas[i].nome);
            fprintf(p, "\tAluno %d\n\n", x);
            fprintf(p," Nome: %s\n\n ", vetnotas[i].nome);
            printf("Insira a nota da primeira prova:");
            scanf("%f",&vetnotas[i].nota1);
            fprintf(p,"Nota 1: %.2f\n\n", vetnotas[i].nota1);
            printf("Insira a nota da segunda prova: ");
            scanf("%f", &vetnotas[i].nota2);
            fprintf(p," Nota 2: %.2f\n\n",vetnotas[i].nota2);
            fprintf(p," Média final: %.2f\n\n", (vetnotas[i].nota1 + vetnotas[i].nota2)/2);
            fprintf(p,"-------------------------------------------------\n\n");
            mediafinal = mediafinal + (vetnotas[i].nota1 + vetnotas[i].nota2) /2;
            x++;
        }
        fprintf(p,"Média da sala: %.2f", mediafinal/3);
        getch();
        fclose(p);
    }



}



