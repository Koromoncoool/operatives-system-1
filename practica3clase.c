#include<stdio.h>
/*Este programa calcula el promedio de n numeros*/
 void calculaPromedio()
    {
     int i,N,calif,suma=0;
     float promedio;
     printf("Escribe la catidad de numeros");
     scanf("%d",&N);
   
    for(i=1;i<=N;i++)
      {
       printf("Escribe la calificacion");
       scanf("%d",&calif);
       suma= suma+calif;
      }
    promedio=suma/N;
    printf("El promedio de las calificaciones es %f",promedio);  
    }
int main()
{ 
     calcularPromedio();  
}
