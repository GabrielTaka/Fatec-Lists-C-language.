#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
setlocale(LC_ALL,"portuguese");
int i, vet[16], x = 0, soma = 0;
vet[0] = 1;

for(i = 1; i < 16; i++){
    vet[i] = pow(2,i);
    soma = soma + vet[i];
}
for(i = 0; i < 16; i++){
    printf("%d  ", vet[i]);
    x++;
    if(x == 4){
        printf("\n");
        x = 0;
    }

}
printf("A quantidade total de grão foi de :%d", soma);
}
