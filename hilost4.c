#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>
#include<string.h>

typedef struct dato
{
    char *cadena;
    int x,y;
}parametro;

void gotoxy(int x, int y)
{
    printf("\033[%d;%df", y, x);
}
void *saludo(void *args){
    parametro *par = (parametro *)args;
    int i;
    for(i = 0; i < strlen(par->cadena);i++){
        fflush(stdout);
        gotoxy(par->x,par->y);
        par->x++;
        printf("%c",par->cadena[i]);
        sleep(1);
    }
    printf("\n");
}
int main(int argc, char const *argv[])
{
    pthread_t hilo1,hilo2;
    char *cadena="hola mundo";
    parametro p1;
    p1.cadena="hola";
    p1.x=10;
    p1.y=20;

    parametro p2;
    p2.cadena="mundo";
    p2.x=20;
    p2.y=20;
    pthread_create(&hilo1,NULL,saludo,(void *)&p1);
    pthread_create(&hilo2,NULL,saludo,(void *)&p2);
    pthread_join(hilo1,NULL);
    pthread_join(hilo2,NULL);
    return 0;
}
