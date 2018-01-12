#include <stdio.h>
int troca (int a,int b);

main ( ){
 int num1,num2;
 num1=100;
 num2=200;
 troca (num1,num2);
 printf ("\nEles agora valem %d %d\n",num1,num2);
 getch();
}

int troca (int a,int b){
 int temp;
 temp=a;
 a=b;
 b=temp;
}
