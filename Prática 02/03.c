#include <stdio.h>
#include <locale.h>
int divi(int num);
int divi (int num){
int i, cont = 0;
for (i = 1; i<=num; i++){
    if(num%i==0)
        cont++;
}
return printf("O número %d possui %d divisores!", num, cont);
}



int main (){
int num;
setlocale(LC_ALL,"portuguese");
do{
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &num);
}while (num<0);
divi(num);

}
