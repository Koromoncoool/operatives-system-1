#include<stdio.h>
int main()
{
 float suma, A[10];
 int i=0;
 suma=0;
 float media;
 for(i=0;i<10;i++)
   {
    printf("Escriba un numero %i \n",i+1);
    scanf("%f",&A[i]);
   }
 for(i=0;i<10;i++)
   {
    suma=suma+A[i];
   }
   
 media=suma/10;
 printf("la media es:%f\n",media);
}
