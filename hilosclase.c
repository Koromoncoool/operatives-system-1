#include<pthread.h>
#include<stdio.h>

void func(void)
{
  printf("Hilos %lx \n",pthread_self());
  pthread_exit(NULL);
}

int main()
{
  pthread_t hilo1,hilo2;

  pthread_create(&hilo1,NULL,(void *)func,NULL);
  pthread_create(&hilo2,NULL,(void *)func,NULL);
  printf("El proceso de hilos se esta ejecutando");
  pthread_join(hilo1,NULL);
  pthread_join(hilo2,NULL);
  printf("\n se acaban de ejcutar los hilos");
}
