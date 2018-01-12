#include <stdio.h>
#include <locale.h>
main(){
setlocale(LC_ALL,"portuguese");
int x;
printf("Digite um número positivo...\n");
scanf("%d",&x);
if (x > 0){
    printf("O quadrado é ... %d", x * x);
    }


}
