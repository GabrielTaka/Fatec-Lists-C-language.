#include <stdio.h>
#include <locale.h>
main(){
setlocale(LC_ALL,"portuguese");
int x;
printf("Digite um n�mero positivo...\n");
scanf("%d",&x);
if (x > 0){
    printf("O quadrado � ... %d", x * x);
    }


}
