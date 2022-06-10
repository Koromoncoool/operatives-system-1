#include<stdio.h>
int main()
{

int contador;
int cuatro;
   for(contador=1;contador<=10000;contador++)
     {
      printf("%i\n",contador);
       
      if(contador%4 ==0)
       {
        cuatro++;
       }
      }
   printf("los multiplos de 4 del 1 al 10,000 son:%d",cuatro);
   return 0;
}
