#include<stdio.h>
#include<stdlib.h>

int main(int arcg,char *argv[])
{
/*int x;
   x=sizeof(int);
   printf("%i",x);
   return 0;*/

   /*int *a;
   a=malloc(sizeof(int));
   *a=5;
   printf("%i",*a);
   float *b;
   b=malloc(sizeof(float));
   *b=5.45;
   printf("\n%f",*b);
   return 0;
   */

   char* cadena;
   cadena= malloc(sizeof(char)*128);

   printf("introduce una cadena:");
   scanf("%s",cadena);
   printf("haz dicho %s.\n",cadena);



}
