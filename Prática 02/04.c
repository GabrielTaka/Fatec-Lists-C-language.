#include <stdio.h>
#include <locale.h>
int veri (int x, int y, int z);

int veri (int x, int y, int z){
 if( x!=z & x != y && y != z)
    printf("O triangulo é escaleno!");
else if (x==y && x == z)
    printf("O trianulo é equilátero!");
else if(x == y && x != z)
    printf("O triangulo é isósceles!");
else if (x==z && z != y)
    printf("O triangulo é isosceles!");
else if (y==z && x!= y);
    printf("O triangulo é isosceles!");



}


int main(){
int x,y,z;
setlocale(LC_ALL,"portuguese");
printf("Digite o primeiro lado: ");
scanf("%d", &x);
printf("Digite o segundo lado: ");
scanf("%d", &y);
printf("Digite o terceiro lado: ");
scanf("%d", &z);
veri ( x,  y,  z);

}
