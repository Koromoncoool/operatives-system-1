#include<stdio.h>
int main()
{
   float  r1;
   float  r2;
   float  r3;
   float  rTotal;

   printf("Ingrese el valor de la primera resistencia");
   scanf("%f",&r1);
   printf("Ingrese el valor de la segunda resistencia");
   scanf("%f",&r2);
   printf("Ingrese el valor de la tercera resistencia");
   scanf("%f",&r3);

  rTotal= 1/((1/r1)+(1/r2)+(1/r3));

  printf("el valor de la resistencia total es: %f\n",rTotal);
  return 0;
   
}
