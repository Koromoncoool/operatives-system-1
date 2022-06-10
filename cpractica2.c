#include<stdio.h>
int suma(int a, int b)
{
   int c = a+b;
   return c;
}
int main()
{
  int x= 10, y = 20,z;
  z = suma(x,y);
  printf("el valor de la suma es %d",z);
  return 0;
}
