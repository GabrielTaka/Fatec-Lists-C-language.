#include <stdio.h>
#include <locale.h>

main(){
setlocale(LC_ALL,"portuguese");
int a;
printf("Entre com uma sequ�ncia de n�meros seguido de 0.\n");
for(;;){
    scanf("%d", &a);
    if(a == 0){
        break;
    }
    else {
        printf ("O quadrado do n�mero %d � %d .\n\n", a, a * a);
    }
}


}
