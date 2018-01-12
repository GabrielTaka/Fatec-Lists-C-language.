#include<stdio.h>
#include<conio.h>
void func(int *px, int *py) /*A*/
{
  py = px;                          /*B*/
 *py = (*py) * (*px)*(*px); /*C*/
 *px = *py;                      /*D*/
}
void main(void)
{
  int x, y;
  scanf("%d",&x); /*2*/
  scanf("%d",&y); /*3*/
  func(&x,&y);
  printf("x = %d, y = %d\n", x, y);  /*E*/
}
