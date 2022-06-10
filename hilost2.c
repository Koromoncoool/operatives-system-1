#include<pthread.h>
#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

void* myturn(void * arg)
{
   int *iptr=(int *)malloc(sizeof(int));
   *iptr=5;
   for(int i=0;i<8;i++)
   {
     sleep(1);
     printf("mi turno %d %d\n",i,*iptr);
     (*iptr)++;
   }
   return iptr;
}
void youturn()
{
  for(int i=0;i<3;i++)
   {
     sleep(2);
     printf("tu turno %d\n",i);

   }
}

int main()
{
int *resultado;
  pthread_t newthread;
  pthread_create(&newthread,NULL,myturn,NULL);
//  myturn();
  youturn();
  pthread_join(newthread,(void *)&resultado);
  printf("los hilos estan terminados: *resultados=%d \n",*resultado);
}
