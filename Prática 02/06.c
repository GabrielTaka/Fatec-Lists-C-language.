#include <stdio.h>
#include <locale.h>
int fat(int num, int pot);

int fat(int num, int pot){
int resultado;
if (pot == 0)
    return 1;
else{
    resultado = num *  fat(num, pot - 1);
}
return resultado;

}


int main(){
int num, pot, resultado;
setlocale(LC_ALL,"portuguese");
printf("Digite um número: ");
scanf("%d", &num);
printf("Digite a potência: ");
scanf("%d", &pot);
fat(num, pot);
resultado = fat(num, pot);
printf("%d", resultado);
}
