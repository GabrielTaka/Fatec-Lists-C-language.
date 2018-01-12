#include <stdio.h>
#include <locale.h>

main(){
setlocale(LC_ALL,"portuguese");
int x;
printf("Digite um número interio positivo.\n");
scanf("%d",&x);
if(x > 0 && x %2 == 0){
    printf("O número %d é par\n", x);
}
else{
    printf("O número %d é ímpar\n", x);
}
}
