#include<stdio.h>
int main()
{
  float calif;
  int i,N;
  float suma=0;
  float promedio;
  int aprobado;
  int reprobado;

  printf("Cantidad de alumnos");
  scanf("%d",&N);
  for(i=1;i<=N;i++)
    {

  printf("Escribe calificacion");
  scanf("%f",&calif);

  while(calif<0 || calif>100)
      { 
       printf("Escribe la calificacion");
       scanf("%f",&calif);
      }
        if((calif<=100)&&(calif>69))
            {
              aprobado++;
            }
        else if(calif<=69)
            {
             reprobado++;
            }
 suma = suma + calif;
    }
 promedio=suma/N;
  if((promedio>=90)&&(promedio<=100))
  {
    
    printf("Es un grupo exelente");
  }
  else if((promedio>=70)&&(promedio<=89))
   {
    printf("Es un grupo bueno");
    
   } 
 else if ((promedio<=69)&&(promedio>=0))
      {
        printf("Es un mal grupo");
        
      }
      printf("El numero de alumnos aprobados es de %d",aprobado);
      printf("El numero de alumnos reprobados es de %d",reprobado);
 return 0;
}

