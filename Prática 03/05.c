#include <stdio.h>
#include <locale.h>

int main(){
int vet[10], vetb[10], i, p = 0;
setlocale(LC_ALL,"portuguese");
printf("\tPOPULANDO O PRIMEIRO VETOR!\n\n");
for (i = 0; i <10; i++){
    printf("Insira o %d° número: ", i + 1);
    scanf("%d", &vet[i]);
}
printf("\t\nPOPULANDO O SEGUNDO VETOR!\n\n");
for (i = 0; i <10; i++){
    printf("Insira o %d° número: ", i + 1);
    scanf("%d", &vetb[i]);
}
for (i = 0; i < 10; i++){
    p = p + vet[i] * vetb [i];
}
printf("O produto escalar dos vetores é: %d", p);
}
