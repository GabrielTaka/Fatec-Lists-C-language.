#include <stdio.h>
#include <locale.h>
int primo(int num);
int primo (int num){
int i, cont = 0;
for(i = 1; i<=num; i++){
    if(num%i==0)
        cont++;
}
if(cont==2)
    return 1;
else
    return 0;
}


int main (){
int num, resultado;
setlocale (LC_ALL,"portuguese");
do{
    printf("Entre com um número inteiro positivo:");
    scanf("%d", &num);
}while(num<0);
primo(num);
resultado = primo(num);
if (resultado == 1)
    printf("O número %d é primo...", num);
else
    printf("O número %d não é primo...", num);

}
