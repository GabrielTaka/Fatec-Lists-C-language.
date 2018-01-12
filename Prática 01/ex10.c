#include <stdio.h>
#include <locale.h>

main(){
setlocale(LC_ALL,"portuguese");
int a;
printf("Entre com uma sequência de números seguido de 0.\n");
for(;;){
    scanf("%d", &a);
    if(a == 0){
        break;
    }
    else {
        printf ("O quadrado do número %d é %d .\n\n", a, a * a);
    }
}


}
