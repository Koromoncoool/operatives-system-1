#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

int main()
{
   int suma=0;
   for(int s=1;s<=10000;s++)
   {
     if(s%2==0)
     {
      suma +=s;
     }
   }
   printf("la suma de los 1000 pares es %d",suma);
}

