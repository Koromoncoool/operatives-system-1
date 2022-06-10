#include<stdio.h>

struct alumno
{
  char NoControl[20];
  char nombre[20];
  char Ap[20];
  char Am[20];
  char telefono[15];
  char direccion[20];

}alumno[10];
void captura()
{
  int i;
  for(i=0;i<10;i++)
   {
     printf("%i.digite su Numero de control: ",i+1);
     fgets(alumno[i].NoControl,20,stdin);
     printf("%i.Digite su Nombre: ",i+1);
     fgets(alumno[i].nombre,20,stdin);
     printf("%i.digite su apellido paterno: ",i+1);
     fgets(alumno[i].Ap,20,stdin);
     printf("%i.digite su Apellido Materno; ",i+1);
     fgets(alumno[i].Am,20,stdin);
     printf("%i.digite su Telefono; ",i+1);
     fgets(alumno[i].telefono,15,stdin);
     printf("%i.digite su Direccion: ",i+1);
     fgets(alumno[i].direccion,20,stdin);
   }

}
 void mostrar1()
 {
 int i;
  for(i=0;i<10;i++)
   {
   printf("\n El numero de control es: %s ",alumno[i].NoControl);
   printf("\n El Nombre es: %s ",alumno[i].nombre);
   printf("\n El Apellido Paterno es: %s ",alumno[i].Ap);
   printf("\n El Apellido Materno es: %s ",alumno[i].Am);
   }
 }
 void mostrar2()
 {
  int i;
  for(i=0;i<10;i++)
   {
   printf("\n El numero de control es: %s ",alumno[i].NoControl);
   printf("\n El Nombre es: %s ",alumno[i].nombre);
   printf("\n El Apellido Paterno es: %s ",alumno[i].Ap);
   printf("\n El Apellido Materno es: %s ",alumno[i].Am);
   printf("\n La direccion es: %s ",alumno[i].direccion);
   printf("\n El Telefono es: %s ",alumno[i].telefono);
   }
}
void menu()
{
  int opcion;

do{
 printf("\n 1.Listar el numero de control,el nombre con apellidos");
 printf("\n 2.Listar todos los datos");
 printf("\n 3.salir");
 printf("\n Escoja una opcion");
 scanf("%d",&opcion);
 switch(opcion)
        {
          case 1:
          mostrar1();
          break;

          case 2:
          mostrar2();
          break;

          case 3:
          break;

          default:
          printf("Opcion no valida");
        }

}while(opcion!=3);
}

int main()
{
captura();
menu();
 return 0;
}
