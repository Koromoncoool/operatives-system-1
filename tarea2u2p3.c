#include<stdio.h>

int main(void)
{
  int i=0;
  int a[100];
  int j;
  int suma=0;

  for(j=1;j<=100;j++)
    {
     if(j%2==0)
      {
       a[i]=j;
       i++;
      }
    }  
 for(j=0;j<i;j++)
     {
      suma=suma+a[j];
     }

 printf("el valor de la suma es %d\n",suma);
 return 0;
}
