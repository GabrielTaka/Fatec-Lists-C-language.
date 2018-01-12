#include <stdio.h>
#include <locale.h>

int main(){
int n, i, aux, total = 0;
setlocale(LC_ALL,"portuguese");
printf("Insira o número de voltas: ");
scanf("%d", &n);
int vet[n];
for( i = 0; i < n; i++){
    printf("Insira o tempo da %d° volta: ", i + 1);
    scanf("%d", &vet[i]);
}
aux = vet[0];
for(i = 1; i < n; i++){
    if(aux > vet[i])
        aux = vet[i];

}
printf("O menor tempo foi: %d", aux);
for(i = 0; i < n; i++){
    if(aux == vet[i])
        printf("\nO melhor tempo ocorreu na volta de número: %d", i + 1);

}
for(i = 0; i < n; i++){
    total = total + vet[i];
}
printf("\nO tempo médio das voltas foi: %d", total/n);
}
