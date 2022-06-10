#include<stdio.h>
void validar(int n)
  {
     if((n==70)&&(n<=79))
     {
      printf("Calificacion Suficiente");
     }
    else if((n>=80)&&(n<=89))
     {
      printf("Calificacion Bien");
     }
    else if((n>=90)&&(n=100))
     {
      printf("Calificacion exelente");
     }
     else
     {
      printf("Alumno no Aprobado");
     }
  }
   int main()
       {
       validar(60);
       return 0;
       } 

