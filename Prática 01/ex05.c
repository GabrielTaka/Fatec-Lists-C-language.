#include <stdio.h>
#include <locale.h>

main(){
setlocale(LC_ALL,"portuguese");
int x;
printf("Digite um n�mero interio positivo.\n");
scanf("%d",&x);
if(x > 0 && x %2 == 0){
    printf("O n�mero %d � par\n", x);
}
else{
    printf("O n�mero %d � �mpar\n", x);
}
}
