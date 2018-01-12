#include <stdio.h>
#include <locale.h>

int main(){
int vetor [8],i, x = 0;
setlocale(LC_ALL,"portuguese");

for(i = 4; i < 8; i++){
    printf("Insira o %d° do vetor: ", x + 1);
    scanf("%d", &vetor[i]);
    x++;
}
for(i = 0; i < 4; i++){
    printf("Insira o %d° do vetor: ", x + 1);
    scanf("%d", &vetor[i]);
    x++;

}
printf("Vetor: ");
for (i = 0; i < 8; i++){
    printf("%d ", vetor[i]);
}
}
