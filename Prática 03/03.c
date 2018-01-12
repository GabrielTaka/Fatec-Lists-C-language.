#include <stdio.h>
#include <locale.h>

int main(){
int vetor [10], x, i;
setlocale(LC_ALL,"portuguese");

for(i = 0; i < 10; i++){
    printf("Digite o %d° do vetor: ", i + 1);
    scanf("%d", &vetor[i]);
}
printf("\nDigite um número a ser encontrado no vetor: ");
scanf("%d", &x);

for ( i = 0; i < 10; i++){
    if(vetor[i] == x)
        printf("\nEncontramos seu número na posição [%d] do vetor!\n", i);
}

}
