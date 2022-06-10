#include<stdio.h>
#include<stdlib.h>

void ordenar(int n, int *x);

main ()
{
  int i,n,*x;

  printf("\n ¿Cuantos numeros seran introuducidos?");
  scanf("%d",&n);
  printf("\n");
  //reserva memoria
  x = (int *) malloc(n * sizeof(int));
//lee los numros
  for(i=0;i<n;++i)
  {
   printf("i = %d x= ",i+1);
   scanf("%d",x+i);
 }
  ordenar(n,x);

  printf("\n la lista de numereos ordenada es: ");
  for(i=0;i<n;++i)
  printf("i=%d x=%d\n",i+1,*(x+i));


}
void ordenar(int n,int *x)
{
  int i,elem,temp;
  for(elem=0;elem<n-1;++elem)
  {
    for(i=elem+1;i<n;++i)
    {
      temp = *(x+elem);
      *(x+elem)=*(x+i);
      *(x+i)=temp;
    }
  }
  return;
}
