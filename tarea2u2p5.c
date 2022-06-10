#include<stdio.h>
int main()
{
 int a[15];
 int j,i,d;

 for(j=0;j<=14;j++)
    {
      printf("ingresa un numero entero %d:",j+1);
      scanf("%d",&a[j]);
    }
 for(j=0;j<=14;j++)
   {
    for(i=0,d=1;d<=14;i++,d++)
      {
       if(a[i]>a[d])
        {
          int temp=a[d];
          a[d]=a[i];
          a[i]=temp;
        }
      }
    }
 for(j=0;j<=14;j++)
   {
    printf(" el numero ordenado es %d\n",a[j]);
   }
 return 0;
}
