#include <stdio.h>
#include <locale.h>

int main(){
int i, num;
setlocale(LC_ALL,"portuguese");
printf("Insira o tamanho do seu vetor: ");
scanf("%d", &num);
int vetor [num];

for(i = 0; i < num; i++){
    printf("Digite o %d° número do vetor: ", i + 1);
    scanf("%d", &vetor[i]);
}
printf("Vetor na ordem inversa: ");
for( i = num - 1; i >= 0 ; i--){
    printf("%d  ", vetor[i]);
}
}
