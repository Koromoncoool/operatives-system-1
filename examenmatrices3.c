#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int A[4][4];
    int B[4][4];
    int C[4][4];
    int x,y;

    printf("Matriz 1");
    for(x=1;x<=3;x++)//columnas
    {
      for(y=1;y<=3;y++)//filas
        {
          printf("\n Intruduce el valor de [%d][%d]:",x,y);
          scanf("%d",&A[x][y]);
        }
    }
    printf("Matriz 2");
    for(x=1;x<=3;x++)//columnas
    {
      for(y=1;y<=3;y++)//filas
        {
          printf("\n Intruduce el valor de [%d][%d]:",x,y);
          scanf("%d",&B[x][y]);
        }
    }
    for(x=1;x<=3;x++)//columnas
    {
      for(y=1;y<=3;y++)//filas
        {
          C[x][y]=(A[x][1]*B[1][y])+(A[x][2]*B[2][y])+(A[x][3]*B[3][y]);
        }
    }
    printf("las matrices originales son: \n");
    printf("Matriz 1\n");
    for(x=1; x<=3; x++)//columnas
    {
        for(y=1; y<=3; y++)//filas
        printf(" %d ",A[x][y]);
        printf("\n");
    }
    printf("Matriz 2\n");
    for(x=1; x<=3; x++)//columnas
    {
        for(y=1;y<=3;y++)//filas
        printf(" %d ",B[x][y]);
        printf("\n");
    }
    printf("Se va imprimir el resultado: \n");
    printf("\n");
    for(x=1;x<=3;x++)//columnas
    {
        for(y=1;y<=3;y++)//filas
        printf(" %d ",C[x][y]);
        printf("\n");
    }
    printf("\n\n");
}
