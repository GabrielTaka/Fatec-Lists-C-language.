#include <stdio.h>
#include <locale.h>

main(){
setlocale(LC_ALL,"portuguese");
int cont, soma = 0,num;
printf("Entre com o n�mero desejado: ");
scanf("%d", &num);
for(cont = 1; cont <= num; cont++){
    soma = soma + cont;

}
printf ("A soma dos %d primeiros naturais �: %d\n",num ,soma);


}
