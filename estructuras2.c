#include<stdio.h>
//gets sirve solo para cadenas
//fflush(stdin); borra el buffer
//typedef renombra ejemplo typedef  struct persona p;

struct persona
{
  char nombre[20];
  char  edad[4];
}persona1,persona2;

int main()
{
 printf("1.Digite su nombre");
 fgets(persona1.nombre,20,stdin);
 printf("1.digite su edad");
 fgets(persona1.edad,4,stdin);
 
 printf("\n 2.digite su nombre");
 fgets(persona2.nombre,20,stdin);
 printf("2.digite su edad");
 fgets(persona2.edad,24,stdin);

 printf("\n su nombre es %s y su edad %s",persona1.nombre,persona1.edad);
 printf("\n su nombre es %s y su edad %s",persona2.nombre,persona2.edad);
 return 0;
}
