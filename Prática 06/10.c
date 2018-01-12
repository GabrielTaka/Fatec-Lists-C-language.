#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <conio.h>
void listar ();
void listarall();
void menu();

void menu(){
    FILE *p;
    char vetor [100][100];
    int i = 1;
    int num;
    int escolha;
    p = fopen("notepad.txt","r");
    if(p==NULL){
        printf("Erro, impossível abrir o arquivo.");
        exit(1);
    }
    else{
    while(!feof(p)){
           fgets(vetor,100,p);
        }
        do{
            printf("\tNOTEPAD--\n\n");
            printf("<1> Listar.\n\n");
            scanf("%d", &num);
        }while(num!= 1);
        switch(num){
        case (1):
            do{
                printf("\n\nEscolha a opção desejada.\n\n");
                printf("<1>Intervalo de linhas.\n\n");
                printf("<2>Linha incial até linha final\n\n");
                scanf("%d", &escolha);
            }while(escolha != 1 && escolha != 2);
            switch(escolha){
            case(2):
                listarall();
                break;
            case (1):
                listar();
                break;
                }
        }


        }

}
void listar() {
    FILE *p;
    char vetor [100][100];
    int i = 1;
    int inicial;
    int fim;
    p = fopen("notepad.txt","r");
    if(p==NULL){
        printf("Erro, impossível abrir o arquivo.");
        exit(1);
    }
    else{
        printf("Indique o intervalode linhas a ser exibido.\n");
        printf("De: ");
        scanf("%d", &inicial);
        printf("Até: ");
        scanf("%d", &fim);
        while(inicial<=fim){
        fgets(vetor,100,p);
        printf("LINHA %d: %s\n",i, vetor);
        i++;
        inicial++;
        }
        menu();
}
}

void listarall(){
    FILE *p;
    char vetor [100][100];
    int i = 1;
    p = fopen("notepad.txt","r");
    if(p==NULL){
        printf("Erro, impossível abrir o arquivo.");
        exit(1);
    }
    else{
    while(!feof(p)){
        fgets(vetor,100,p);
        printf("LINHA %d: %s", i, vetor);
        i++;
    }
    printf("\n\n");
    menu();
}
}

main(){
    setlocale(LC_ALL,"portuguese");
    int num;
    int escolha;
    FILE *p;
    char vetor [100][100];
    int i = 0;

    p = fopen("notepad.txt","r");
    if(p==NULL){
        printf("Erro, impossível abrir o arquivo.");
        exit(1);
    }
    else{
            menu();

    }
    fclose(p);
    getch();

}
