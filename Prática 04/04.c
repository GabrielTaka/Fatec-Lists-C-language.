#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
    setlocale(LC_ALL,"portuguese");
    int num;
    int *p;
    printf("Digite um número desejado: ");
    scanf("%d",&num);
    p = &num;
    printf("%d", p);
}
