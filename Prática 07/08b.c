#include <stdio.h>
#include <conio.h>
#include <locale.h>
int vetor [10];
int topo = 0;
int primo(int num);
void push (int num);

void push (int num){
    if(topo >= 10){
        printf("Pilha cheia\n");
        return;
    }
    vetor[topo] = num;
    topo++;

}
int primo (int num){
    int i, count = 0;
    for(i = 1; i <= num;i++){
        if(num%i==0){
            count++;
        }
    }
    if(count == 2){
        void push (num);
        return 1;
    }
    else{
        return 0;
    }
}


main(){
    setlocale(LC_ALL,"portuguese");
    int num, resultado;
    do{
        printf("Digite um número inteiro positivo: ");
        scanf("%d", &num);
        if(num < 0){
            printf("Número inválido!\n\n");
        }
    }while(num < 0);
    primo(num);
    resultado = primo(num);
    if(resultado == 1){
        printf("O número é primo.");
        printf(vetor[0]);
    }
    else{
        printf("O número não é primo.");
    }
}
