#include<stdio.h>
int main()
{
  int i, a[10];
  int mayor=0;
  int contador1=0;
  int contador2=0;


  for(int i=0;i<10;i++)
    {
     printf("ingresa el numero %i\n",i+1);
     scanf("%d",&a[i]); 
    
        if(i%2==0)
        {
        contador1++;
        }
       if(a[i]>=100)
        {
       contador2++;
        }
       if(a[i]>mayor)
        {
          mayor=a[i];
        }

    }
   printf("los numeros pares son:%d\n",contador1);
   printf("los numeros mayor o iguales a 100 son %d\n y el numero mayor es %d\n",contador2,mayor);
}
