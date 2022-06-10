#include<stdio.h>
#include<string.h>
struct alumnos
{
  char Ap[20];
  char NoControl[20];
  char Am[20];
  char nombre[20];
  char Telefono[20];
  float calif;
  float Prom;
}alumno[30];

void captura()
{

  char NombreMayor[20];
  float mayor=0;
  int cantidad;
  int i;
  float suma;
  float promedioTotal;


  printf("\n Digite cantidad de alumnos:");
  scanf("%d",&cantidad);

  for(i=0;i<cantidad;i++)
    {
      fflush(stdin);
      printf("\n ingrese el numero de control del estudiante %d:",i+1);
      fflush(stdin);
      fgets(alumno[i].NoControl,20,stdin);
      printf("\n ingrese el nombre del estudiante %d:",i+1);
      fgets(alumno[i].nombre,20,stdin);
      printf("\n ingrese el apellido paterno del estudiante %d:",i+1);
      fgets(alumno[i].Ap,20,stdin);
      printf("\n ingrese el apellido materno del estudiante %d:",i+1);
      fgets(alumno[i].Am,20,stdin);
      printf("\n ingrese el telefono del estudiante %d:",i+1);
      fgets(alumno[i].Telefono,20,stdin);
      printf("\n ingrese la calificacion del alumno %d: ",i+1);
      scanf("%f",&alumno[i].calif);
      suma = suma + alumno[i].calif;
      promedioTotal=suma/cantidad;

       if(alumno[i].calif>mayor)
         {
          mayor=alumno[i].calif;
          strcpy(NombreMayor,alumno[i].nombre);
         }

    }
    printf("El promedio total del grupo es: %f ",promedioTotal);
    printf("\nel almno con la mayor calificacion es %s y su calificacion es %f ",NombreMayor,mayor);
}

int main()
{
  captura();

}
