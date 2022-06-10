#include<pthread.h>
#include<stdio.h>
#include<stdlib.h>

void suma()
{
   int A[20];
   int i,j;
   int sumatoria=0;

   for(i=1;i<=20;i++)
   {
     A[i]=rand()%10;
   }
   for(i=0;i<20;i++)
   {
     printf("%d \n",A[i]);
   }
   for(i=0;i<20;i++)
   {
      int numeroactual = A[i];
      sumatoria = sumatoria + numeroactual;
   }
   printf("La sumatoria de los 20 numeros es de %d \n",sumatoria);

}

void matrices()
{
  int A[4][4];
  int B[4][4];
  int C[4][4];
  int x,y;
  printf("/////////////////////////////////////////////////////////////\n");
  printf("Suma de matrices\n");
  printf("Matriz 1\n");
  for(x=1;x<=3;x++)
  {
   for(y=1;y<=3;y++)
     {
       A[x][y]=rand()%10;
      printf(" %d ",A[x][y]);
       printf("\n");
     }
  }
  printf("Matriz 2\n");
  for(x=1;x<=3;x++)
  {
   for(y=1;y<=3;y++)
     {
       B[x][y]=rand()%10;
       printf(" %d ",B[x][y]);
       printf("\n");
     }
  }
  printf("Se esta realizando la operacion....\n");
  for(x=1;x<=3;x++)
  {
   for(y=1;y<=3;y++)
   {
     C[x][y]=(A[x][1]*B[1][y])+(A[x][2]*B[2][y])+(A[x][3]*B[3][y]);
   }
  }
  printf("Se va imprimir el resultado: \n");
  for(x=1;x<=3;x++)
  {
   for(y=1;y<=3;y++)
     printf(" %d ",C[x][y]);
     printf("\n");
  }
}

void factorial()
{
  int c,fact=1;
  int n =rand()%2000;

printf("/////////////////////////////////////////////////////////\n");
  for(c=1;c<=n;c++)
  {
     fact=fact *c;
  }
  printf("El factorial de %d es: %d \n",n,fact);
}

//-lm para copilar con math
int main()
{
  suma();
  matrices();
  factorial();
}
