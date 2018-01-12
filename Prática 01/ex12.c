#include <stdio.h>
#include <locale.h>
main(){
setlocale(LC_ALL,"portuguese");

int num, cont =1, impar = 1;
printf("Entre com o valor de n: ");
scanf("%d", &num);

while(cont <= num){
    printf("%d\n",impar);
    impar += 2;
    cont += 1;

    }

}
