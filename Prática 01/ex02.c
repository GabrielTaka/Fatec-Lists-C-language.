#include <stdio.h>
#include <locale.h>
main(){
setlocale(LC_ALL,"portuguese");
int x;
printf("Digite um número inteiro positivo\n");
scanf("%d",&x);
printf("%d\n",x);

}
