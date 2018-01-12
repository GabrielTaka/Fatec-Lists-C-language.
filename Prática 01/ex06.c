#include <stdio.h>
#include <locale.h>

main(){
setlocale(LC_ALL,"portuguese");
int a, b, c;
printf("Digite o primeiro número:\n");
scanf ("%d",&a);
printf("Digite o segundo número número:\n");
scanf ("%d",&b);
printf("Digite o terceiro número:\n");
scanf ("%d",&c);

if (a < b && a < c && b < c){
    printf ("Ordem crescente dos números: %d,%d,%d", a, b, c);
}
else if (a < b && a < c && c < b){
    printf ("Ordem crescente dos números: %d,%d,%d", a,c,b);
}
else if (b < a && b < c && a < c){
    printf ("Ordem crescente dos números: %d,%d,%d", b,a,c);
}
else if (b < a && b < c && c < a){
    printf ("Ordem crescente dos números: %d,%d,%d", b,c,a);
}
else if (c < a && c < b && a < b){
    printf ("Ordem crescente dos números: %d,%d,%d", c,a,b);
}
else if (c < a && c < b && b < a){
    printf ("Ordem crescente dos números: %d,%d,%d", c,a,b);
}


}
