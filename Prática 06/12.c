#include <stdio.h>
#include <conio.h>

int vetor[10];
int topo=0;

void push(int i){
    if(topo>=10){
        printf("Pilha cheia\n");
        return;
    }
    vetor[topo] = i;
    topo++;
}

pop(){
    topo--;
    if(topo < 0){
        printf("Pilha vazia\n");
        return 0;

    }
    return vetor[topo];

}

void imprimir(){
    int i;
    printf("Pilha : \n");
    for( i = topo - 1; i >=0; i--){
        printf("%d \n",vetor[i]);
    }
}


main(){
    int recuperando1,recuperando2;
    push(12);
    push(14);
    push(13);
    push(20);
    recuperando1*pop();
    recuperando2*pop();
    push(12);
    imprimir();
    printf("\n");
    printf("%d\n", recuperando1);
    printf("%d\n", recuperando2);
    getch();



}
