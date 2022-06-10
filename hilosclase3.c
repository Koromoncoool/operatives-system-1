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
  printf("Soy el hilo %lx \n",pthread_self());
  printf("El perimetro es: %d \n",perimetro);
}

//-lm para copilar con math
int main(int argc,char const *argv[])
{
 int tam;
 printf("\n cantidad de triangulos:");
  scanf("%d",&tam);
 Triangle mi_triagulo[tam];
 //pthread_t hilos[tam]=1+rand()%10;
 for(int i=0;i<tam;++i)
 {
  pthread_t hilos[i].rand()%10;
  pthread_create(&hilos[i],NULL,MostarP,(void*)&mi_triagulo[i]);
  pthread_join(hilos[i],NULL);
 }
 return 0;
}
