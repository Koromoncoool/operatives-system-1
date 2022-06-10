#include<stdio.h>
//#include<stidn.h>

struct inf_direccion
{
 char direccion[20];
 char ciudad[20];
 char providencia[20];
};

struct empleado
{
  char nombre[20];
  struct  inf_direccion dir_empleado;
  char salario[20];
}empleado[2];

int main()
{
 // typedef struct empleado E;
 //E A[2];

 for(int i=0;i<2;i++)
   {
     printf("%i.digite su nombre: ",i+1);
     fgets(empleado[i].nombre,20,stdin);
     printf("%i.Digite su direccion",i+1);
     fgets(empleado[i].dir_empleado.direccion,20,stdin);
     printf("%i.digite su ciudad",i+1);
     fgets(empleado[i].dir_empleado.ciudad,20,stdin);
     printf("%i.digite su providencia",i+1);
     fgets(empleado[i].dir_empleado.providencia,20,stdin);
     printf("Digite su salario");
     fgets(empleado[i].salario,20,stdin);
   }
 for(int i=0;i<2;i++)
   {
    printf("\n los  datos del %i",i+1);
    printf("\n El nombre es: %s ",empleado[i].nombre);
    printf("\n La direccion del empleado es: %s ",empleado[i].dir_empleado.direccion);
    printf("\n La ciudad es:  %s ",empleado[i].dir_empleado.ciudad);
    printf("\n El providencia es: %s ",empleado[i].dir_empleado.providencia);
    printf("\n el salario es: %s ",empleado[i].salario);


   }
}
