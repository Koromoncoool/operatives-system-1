#include<pthread.h>
#include<stdio.h>
#include<stdlib.h>
void suma()
{
   printf("hilo: %lx \n",pthread_self());
}

void matrices()
{
    printf("hilo:%lx\n\n",pthread_self());
}
void euler()
{
    printf("hilo: %lx \n",pthread_self());
}

void factorial()
{
    printf("hilo:%lx\n",pthread_self());
}
int main()
{
    pthread_t hilos[4];
    for(int i=0; i<=3; i++)
    {
        if (i == 0)
         {
            pthread_create(&hilos[0],NULL,(void *)suma,NULL);
            pthread_join(hilos[i],NULL);
        }
        else if (i == 1)
        {
            pthread_create(&hilos[1],NULL,(void *)matrices,NULL);
            pthread_join(hilos[i],NULL);
        }

        else if (i == 2)
        {
            pthread_create(&hilos[i],NULL,(void *)euler,NULL);

            pthread_join(hilos[i],NULL);
        }
        else if (i == 3)
        {
            pthread_create(&hilos[i],NULL,(void *)factorial,NULL);
            pthread_join(hilos[i],NULL);
        }
    }
    return 0;
}
