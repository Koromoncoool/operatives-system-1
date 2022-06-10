#include<stdio.h>
#include<stdlib.h>

#define MAXFIL 20

void leerentrada(int *a[MAXFIL],int nfilas,int ncols);
void calcularsuma(int *a[MAXFIL],int *b[MAXFIL],int *c[MAXFIL],int nfilas,int ncols);
void escribirsalida(int *c[MAXFIL],int nfilas,int ncols);

 main()
{
  int fila,nfilas,ncols;
  int *a[MAXFIL],*b[MAXFIL],*c[MAXFIL];

  printf("¿Cuantas filas se pondran?");
  scanf("%d",&nfilas);
  printf("¿Cuantas columnas?");
  scanf("%d",&ncols);

  for(fila=0;fila<nfilas;++fila)
  {
    a[fila]=(int *)malloc (ncols * sizeof(int));
    b[fila]=(int *)malloc (ncols * sizeof(int));
    c[fila]=(int *)malloc (ncols * sizeof(int));
  }
  printf("\n Primera tabla");
  leerentrada(a,nfilas,ncols);
  printf("\n Segunda Tabla");
  leerentrada(b,nfilas,ncols);

  calcularsuma(a,b,c,nfilas,ncols);

  printf("\n suma de los elemtos");
  escribirsalida(c,nfilas,ncols);
}

void leerentrada(int *a[MAXFIL],int m,int n)
{
 int fila,col;
 for(fila=0;fila<m;++fila)
 {
   printf("\n Introducir datos de la fila n2 %2d\n",fila+1);
   for(col=0;col<n;++col)
   {
     scanf("%d",(*(a+fila)+col));
   }

 }
 return;
}
 void calcularsuma(int *a[MAXFIL],int *b[MAXFIL],int *c[MAXFIL],int m,int n)
{
 int fila,col;
 for(fila=0;fila<m;++fila)
 {
   for(col=0;col<n;++col)
   {
     *(*(c+fila)+col)=*(*(a+fila)+col)+*(*(b+fila)+col);
   }
 }
 return;
}
void escribirsalida(int *a[MAXFIL],int m,int n)
{
 int fila,col;
 for(fila=0;fila<m;++fila)
 {
   for(col=0;col<n;++col)
   {
     printf("%4d",*(*(a+fila)+col));
     printf("\n");
   }
 }
 return;
}


