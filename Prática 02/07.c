#include <stdio.h>
#include <locale.h>
int ler ();
int multiplicar (int a, int b);
void exibe ( resultado);

void exibe( resultado){
printf("O resultado �: %d", resultado);
}

int ler (){
int a,  b;
printf("Digite o primeiro n�mero: ");
scanf("%d", &a);
printf("Digite o segundo n�mero: ");
scanf("%d", &b);
multiplicar ( a,  b);
}

int multiplicar (int a, int b){
int resultado;
resultado = a * b;
exibe(resultado);

}


int main(){
setlocale(LC_ALL,"portuguese");
ler ();

}
