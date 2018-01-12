#include <stdio.h>
#include <locale.h>
int fat (int fat);
int fat (int num){
int resultado;
if (num ==1)
    return 1;
else{
    resultado = num * fat(num -1);
}
return resultado;

}


int main(){
int num, resultado;
setlocale(LC_ALL,"portuguese");
printf("Digite um número: ");
scanf("%d", &num);
fat(num);
resultado = fat(num);
printf("O fatorial de %d é %d", num ,resultado);
}
