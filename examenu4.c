#include<pthread.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void suma(void)
{
    int A[20];
    int i,j;
    int sumatoria=0;
    srand(time(NULL));

    printf("Sumatoria \n");
    for(i=1; i<=20; i++)
    {
        A[i]=1+rand()%(50-1+1);
    }
    for(i=0; i<20; i++)
    {
        printf("%d \n",A[i]);
    }
    for(i=0; i<20; i++)
    {
        int numeroactual = A[i];
        sumatoria = sumatoria + numeroactual;
    }
   printf(" soy el hilo: %lx  y calculo la sumatoria \n",pthread_self());
   printf("La sumatoria de los 20 numeros es de %d \n",sumatoria);
}

void matrices(void)
{
    int A[4][4];
    int B[4][4];
    int C[4][4];
    int x,y;
    printf("/////////////////////////////////////////////////////////////\n");
    printf("Suma de matrices\n");
    for(x=1; x<=3; x++)
    {
        for(y=1; y<=3; y++)
        {
            A[x][y]=1+rand()%(50-1+1);;
        }
    }
    for(x=1; x<=3; x++)
    {
        for(y=1; y<=3; y++)
        {
            B[x][y]=1+rand()%(50-1+1);;
        }
    }
    printf("Se esta realizando la operacion....\n");
    for(x=1; x<=3; x++)
    {
        for(y=1; y<=3; y++)
        {
            C[x][y]=(A[x][1]*B[1][y])+(A[x][2]*B[2][y])+(A[x][3]*B[3][y]);
        }
    }
    printf("las matrices originales son: \n");
    printf("Matriz 1\n");
    for(x=1; x<=3; x++)
    {
            for(y=1; y<=3; y++)
            printf(" %d ",A[x][y]);
        printf("\n");
    }
    printf("Matriz 2\n");
    for(x=1; x<=3; x++)
    {
        for(y=1; y<=3; y++)
            printf(" %d ",B[x][y]);
        printf("\n");
    }
    printf("soy hilo:%lx y calculo las matrices\n",pthread_self());
    printf("Se va imprimir el resultado: \n");
    for(x=1; x<=3; x++)
    {
        for(y=1; y<=3; y++)
            printf(" %d ",C[x][y]);
        printf("\n");
    }
    printf("\n\n");
}
void euler(void)
{
    float sumatorio,producto;
    int A[15];
    float denominador=1;
    float numerador=1;
    float e=0.0;
    printf("/////////////////////////////////////////////////////////\n");
    for(int i=1;i<=15;i++)
      {
        A[i]=i;
        denominador *=i;
        e += numerador/denominador;
      }
    printf(" soy el hilo: %lx  y calculo euler\n",pthread_self());
    printf("El numero e es: %f\n",e+1);

}

void factorial(void)
{
    int a,b,fact=1;
    //a =1+rand()%(10-1+1);
    a=7;
    printf("/////////////////////////////////////////////////////////\n");
    for(b=a; b>1;b--)
    {
        fact= fact * b;
    }
    printf(" soy el hilo:%lx y calculo el factorial \n",pthread_self());
    printf("El factorial de %d es: %d \n",a,fact);

}
int main()
{
    pthread_t hilos[4];
    for(int i=0;i<1;i++)
    {
       pthread_create(&hilos[0],NULL,(void *)factorial,NULL);
       pthread_create(&hilos[1],NULL,(void *)euler,NULL);
       pthread_create(&hilos[2],NULL,(void *)matrices,NULL);
       pthread_create(&hilos[3],NULL,(void *)suma,NULL);
       pthread_join(hilos[i],NULL);
    }
    return 0;
}
