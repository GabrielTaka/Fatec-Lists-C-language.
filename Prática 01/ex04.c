#include <stdio.h>
#include <locale.h>

main(){
setlocale(LC_ALL,"portuguese");
int x;
printf("Digite o ano em que nasceu.\n");
scanf("%d", &x);
printf("A sua idade é de:  %d", 2017 - x);



       }
