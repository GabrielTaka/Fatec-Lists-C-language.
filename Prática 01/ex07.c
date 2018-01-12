#include <stdio.h>
#include <locale.h>

main(){
setlocale(LC_ALL,"portuguese");
int num;
int fat = 1;
int cont;
printf("Digite o número a ser fatorado.\n");
scanf("%d",&num);
for (cont =1; cont <= num; cont++){
    fat = cont * fat;
}
printf("O fatorial de %d é %d", num, fat);


}
