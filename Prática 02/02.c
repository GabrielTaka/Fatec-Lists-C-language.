#include <stdio.h>
#include <locale.h>
int soma (int num);
int soma (int num){
int cont, z = 1, e = 0, r = 0, i = 0;
do{
    e = 0;
    z++;
    for( cont = 1; cont<=z; cont++){
        if(z%cont==0)
            e++;
    }
    if (e==2){
        r++;
        i = i + z;
        printf("+ %d", z);
    }

}while(r!=num);
return printf("=  %d", i);
}


int main(){
int num;
setlocale(LC_ALL,"portuguese");
do{
    printf("Entre com um número inteiro positivo:");
    scanf("%d", &num);
}while(num<0);
soma(num);

}
