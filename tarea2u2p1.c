#include<stdio.h>
int main()
{
  int i,a[10];
  int cont=0;

 for(i=0;i<10;i++)
   {
     printf("ingresa el numero %i\n",i+1);
     scanf("%d",&a[i]);
    
     if(a[i]%5==0)
      {
        cont++;
      }
   }
 printf("los numeros multiplos de 5 son: %d\n",cont);
}
