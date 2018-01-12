#include <conio.h>
#include <stdio.h>
main (){
char Ch;
do{
 printf ("\n\nEscolha uma opcao:\n\n");
 printf ("\t(1)...Mamao\n");
 printf ("\t(2)...Abacaxi\n");
 printf ("\t(3)...Laranja\n\n");
 scanf("%c",&Ch);
} while ((Ch!='1')&&(Ch!='2')&&(Ch!='3'));
switch (Ch){
 case '1': printf ("\t\tVoce escolheu Mamao.\n");
 break;
 case '2': printf ("\t\tVoce escolheu Abacaxi.\n");
 break;
 case '3': printf ("\t\tVoce escolheu Laranja.\n");
 break;
 }
 getch();
}


