#include <stdio.h>
#include <locale.h>

main(){
setlocale(LC_ALL,"portuguese");
int a; // Base
int b; // expoente
int cont; // contador
int el; // acumulador de potência
el = 1;

printf("\tCalculo de potência...");
printf ("\nDigite a base: ");
scanf("%d", &a);
printf("\nDigite o expoente: ");
scanf("%d", &b);
for(cont = 1; cont <= b; cont++){
    el = el * a;

}
printf("O valor de %d elevado a %d é %d",a,b, el);



}
