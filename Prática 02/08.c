#include <stdio.h>
#include <locale.h>
int ip (num);
int ip (num){
if (num%2==0)
    return 1;
else
    return 0;
}

int main (){
int num, resultado;
setlocale(LC_ALL,"portuguese");
do{
    printf("Digite um n�mero inteiro positivo: ");
    scanf("%d", &num);
}while (num < 0);
ip(num);
resultado = ip(num);

if(resultado == 1)
    printf("\n\nO n�mero %d � par!!\n\n", num);
else
    printf("\n\nO n�mero %d � impar!!\n\n", num);



}

