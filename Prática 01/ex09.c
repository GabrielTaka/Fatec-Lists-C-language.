#include <stdio.h>
#include <locale.h>

main(){
setlocale(LC_ALL,"portuguese");
int a,b,c;
do
{
    printf("\n\nEntre com a opera��o desejada\n\n");
    printf("<1>...Divis�o\n");
    printf("<2>...Resto da divis�o\n");
    printf("<3>...Adi��o\n");
    printf("<4>...Multiplica��o\n");
    scanf ("%d", &c);
}while ((c != 1)&& (c != 2)&& (c != 3) && (c!= 4));
switch(c){
    case 1: printf ("\nVoc� escolheu divis�o\n");
            printf ("\nDigite o n�mero a ser dividido: ");
            scanf ("%d",&a);
            printf ("Digite o divisor: ");
            scanf ("%d",&b);
            printf ("O resultado �: %d", a / b);

    case 2: printf ("\nVoc� escolheu resto da divis�o\n");
            printf ("\nEntre com o primeiro n�mero: ");
            scanf ("%d",&a);
            printf ("Entre com o segundo n�mero: ");
            scanf ("%d",&b);
            printf ("O resultado �: %d", a % b);

     case 3:printf ("\nVoc� escolheu Adi��o\n");
            printf ("\nEntre com o primeiro n�mero: ");
            scanf ("%d",&a);
            printf ("Entre com o segundo n�mero: ");
            scanf ("%d",&b);
            printf ("O resultado �: %d", a + b);

    case 4: printf ("\nVoc� escolheu multiplica��o\n");
            printf ("\nEntre com o primeiro n�mero: ");
            scanf ("%d",&a);
            printf ("Entre com o segundo n�mero: ");
            scanf ("%d",&b);
            printf ("O resultado �: %d", a * b);
    }

}

