#include<pthread.h>
#include<stdio.h>
typedef struct
{
  int id;
  int a;
  int b;
  int c;
}Triangle;

void* MostarP(void *input)
{
  Triangle *temp_triangle = (Triangle*)input;
  int perimetro = temp_triangle->a+temp_triangle->b+temp_triangle->c;
  printf("Soy el triangulo %lx \n",pthread_self());
  printf("El perimetro es: %d \n",perimetro);
}

//-lm para copilar con math
int main(int argc,char const *argv[])
{
 Triangle mi_triagulo[]={(0,10,15,28),(1,4,17,22),(2,32,10,91)};
 pthread_t hilos[3];
 for(int i=0;i<3;++i)
 {
  pthread_create(&hilos[i],NULL,MostarP,(void*)&mi_triagulo[i]);
  pthread_join(hilos[i],NULL);
 }
 return 0;
}
