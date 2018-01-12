#include <stdio.h>
#include <locale.h>

main(){
setlocale(LC_ALL,"portguese");
int num;
int mult;
int cont;
printf("Entre com um valor: ");
scanf("%d", &num);
for(cont = 0; cont <= 12; cont++){
    mult = cont * num;
    printf("%d X %d = %d\n", num, cont, mult);
}


}
