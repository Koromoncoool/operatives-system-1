#include<stdio.h>
#include<string.h>

struct cuenta 
     {
       char nombre[30];
       char apellido[40];
       int identificador;
       int saldo;     
     };

   void imprimir_datos(struct cuenta c)
       {
         printf("El cliente es %s %s tiene %d pesos en su cuenta\n ",c.nombre,c.apellido,c.saldo);
       }
int main()
{
  struct cuenta c1;
  strcpy(c1.nombre,"juan");
  strcpy(c1.apellido,"ramos");
  c1.identificador=1234;
  c1.saldo=400;
  imprimir_datos(c1);

  struct cuenta c2;
  strcpy(c2.nombre,"carlos");
  strcpy(c2.apellido,"lopez");
  c2.identificador=1245;
  c2.saldo=5;
  imprimir_datos(c2);
  return 0;
}
