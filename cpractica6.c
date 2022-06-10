#include<stdio.h>
void validar(int n)
  {
     if((n =<80)&&(n==70))
     {
      printf("Calificacion Suficiente");
     }
    else if((n=>80)&&(n==90))
     {
      printf("Calificacion Bien");
     }
    else if((n=>90)&&(n==100))
     {
      printf("Calificacion exelente");
     }
     else
     {
      printf("Alumno no Aprobado")
     }
  }
   int main()
       {
       validar(80);
       return 0;
       } 

