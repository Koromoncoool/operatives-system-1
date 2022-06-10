#include<stdio.h>
#include<string.h>

struct alumnos
{
  char nombre[20];
  char Control[20];
  char Direccion[20];
  float edad;
  float estatura;
}alumno[30];

void captura()
{

  char NombreMenor[20];
  float menor=0;
  char NombreMayor[20];
  float mayord=0;
  int cantidad;
  int i;
  float suma;
  float promedioTotal;



  printf("\n Digite cantidad de alumnos:");
  scanf("%d",&cantidad);

  for(i=0;i<cantidad;i++)
    {
      fflush(stdin);
      printf("\n control %d:",i+1);
      fflush(stdin);
      fgets(alumno[i].Control,20,stdin);
      printf("\n ingrese el nombre del estudiante %d:",i+1);
      fflush(stdin);
      fgets(alumno[i].nombre,20,stdin);
      fflush(stdin);
      printf("\n ingrese la direccion %d:",i+1);
      fgets(alumno[i].Direccion,20,stdin);
      printf("\n ingrese la edad %d: ",i+1);
      scanf("%f",&alumno[i].edad);
      printf("\n ingrese la estatura %d: ",i+1);
      scanf("%f",&alumno[i].estatura);
      suma = suma + alumno[i].edad;
      promedioTotal=suma/cantidad;

     if(alumno[i].edad>mayord)
         {
          mayord=alumno[i].edad;
          strcpy(NombreMayor,alumno[i].nombre);
         }
       else if(alumno[i].estatura<menor)
         {
          menor=alumno[i].estatura;
          strcpy(NombreMenor,alumno[i].nombre);
         }


    }
    printf("El promedio total del equipo es: %f ",promedioTotal);
    printf("\nel alumno con la menor altura es %s y su altura es %f ",NombreMenor,menor);
    printf("\nel alumno con la mayor edad es %s y su edad es %f ",NombreMayor,mayord);


}

int main()
{
  captura();

}
