#include <stdio.h>
#include <locale.h>
main(){
setlocale(LC_ALL,"portuguese");
int x;
int a;
int b;
printf("Digite o primeiro n�mero a ser somado.\n");
scanf("%d",&a);
printf("Digite o segundo n�mero a ser somado.\n");
scanf("%d",&b);
x = a + b;
printf("%d\n",x);
}

