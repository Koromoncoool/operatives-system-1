#include <stdio.h>

int main()
{
int j;
int conta=0;
int suma=0;
int i=0;
int tabla[100];
           
   for (j=1;j<=100;j++)
     {
      if (j%2==0)
      {
       tabla[i]=j;
       i++;
      }
     }          
  for (j=0;j<i;j++)
    {
     suma=suma+tabla[j];
    }
 printf("la suma total es:%d\n",suma);
return 0;
}
