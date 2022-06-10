#include<pthread.h>
#include<unistd.h>
#include<stdio.h>
#include <math.h>

void Trapecio()
{
  double base1=4;
  double base2=5;
  double altura=5;
  double areaT;
  areaT=(base1+base2)*altura;
  areaT=areaT/2;
  //base mas base *altura sobre 2
  printf("\nEl area del trapecio es de: %f",areaT);
}

void Circulo()
{
  double pi=3.1416;
  double radio=12;
  double areaC;
  areaC=pi*pow(2,(radio));
  printf("\n El area del trapecio es de: %f",areaC);
}


void main()
{
  pthread_t hilo1,hilo2;
  pthread_create(&hilo1,NULL,(void *)Trapecio,NULL);
  pthread_create(&hilo2,NULL,(void *)Circulo,NULL);
  pthread_join(hilo1,NULL);
  pthread_join(hilo2,NULL);

}
