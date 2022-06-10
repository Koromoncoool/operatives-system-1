#include<pthread.h>
#include<unistd.h>
#include<stdio.h>

void* myturn(void * arg)
{
   for(int i=0;i<8;i++)
   {
     sleep(1);
     printf("mi turno %d\n",i);
   }
   return NULL;
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
  pthread_t newthread;
  pthread_create(&newthread,NULL,myturn,NULL);
//  myturn();
  youturn();
  pthread_join(newthread,NULL);
}
