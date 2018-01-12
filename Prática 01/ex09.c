#include <stdio.h>
#include <locale.h>

main(){
setlocale(LC_ALL,"portuguese");
int a,b,c;
do
{
    printf("\n\nEntre com a operação desejada\n\n");
    printf("<1>...Divisão\n");
    printf("<2>...Resto da divisão\n");
    printf("<3>...Adição\n");
    printf("<4>...Multiplicação\n");
    scanf ("%d", &c);
}while ((c != 1)&& (c != 2)&& (c != 3) && (c!= 4));
switch(c){
    case 1: printf ("\nVocê escolheu divisão\n");
            printf ("\nDigite o número a ser dividido: ");
            scanf ("%d",&a);
            printf ("Digite o divisor: ");
            scanf ("%d",&b);
            printf ("O resultado é: %d", a / b);

    case 2: printf ("\nVocê escolheu resto da divisão\n");
            printf ("\nEntre com o primeiro número: ");
            scanf ("%d",&a);
            printf ("Entre com o segundo número: ");
            scanf ("%d",&b);
            printf ("O resultado é: %d", a % b);

     case 3:printf ("\nVocê escolheu Adição\n");
            printf ("\nEntre com o primeiro número: ");
            scanf ("%d",&a);
            printf ("Entre com o segundo número: ");
            scanf ("%d",&b);
            printf ("O resultado é: %d", a + b);

    case 4: printf ("\nVocê escolheu multiplicação\n");
            printf ("\nEntre com o primeiro número: ");
            scanf ("%d",&a);
            printf ("Entre com o segundo número: ");
            scanf ("%d",&b);
            printf ("O resultado é: %d", a * b);
    }

}

