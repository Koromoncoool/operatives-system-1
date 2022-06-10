#include<stdio.h>
void  main()
{
   int i;
   int A[10];
   printf("Escribe 10 numeros");
   for(i=0;i<10;i++)
     {
       printf("Escribe el numero\n");
       scanf("%d",&A[i]);
     }
   for(i=0;i<10;i++)
     {
        printf("A[%d]=%d\n",i,A[i]);
     }
   int mayor=A[0];
   int pares=0;
   int conta=0;
   for(i=1;i<10;i++)
     {
       if(mayor<A[i])
       {
         mayor=A[i];
       }
       if(i%2==0);
       {
          pares++;
       }
       if(A[i]>100)
        {
           conta++;
        }
     }
   printf("El numero mas grande del arreglo:%d\n los numero pares son:%d\n los numeros mayores a 100 son:%d\n",mayor,pares,conta);
}
