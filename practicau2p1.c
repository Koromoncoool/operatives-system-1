#include<stdio.h>
int main()
{
  int i, a[10];
  int contador1,contador2;


  for(int i=0;i<10;i++)
    {
     printf("ingresa el numero %i",i+1);
     scanf("%d",&a[i]); 
    
     if(i%2==0)
      {
       contador1++;
      }
     while(i<=100)
         {
           contador2++;
         } 

   }
   printf("los numeros pares son:%d",contador1);
   printf("los numeros mayor o iguales a 100 son %d",contador2);
}
