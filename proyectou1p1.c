#include<stdio.h>
int main()
{
   int contador;
   int par;
   for(contador=1;contador<=10000;contador++)
   {
       if(contador%2==0)
        {
           par++;
        }
   }
   printf("los pares de 1 al 10,000 son: %d",par);
   return 0;
}
