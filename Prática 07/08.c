int main()
{
  int a, b,*p1, *p2;
  a = 4;
  b = 3;
  p1 = &a;
  p2 = p1;
  *p2 = *p1 + 3;
  b = b * (*p1);
  (*p2)++;
  p1 = &b;
  printf("*p1=%d *p2=%d\n", *p1, *p2);
  printf("a=%d b=%d\n", a, b);
  getch();
}
