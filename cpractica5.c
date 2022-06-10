#include<stdio.h>
void imprimir_mes(int numero_de_mes)
  {
    switch (numero_de_mes)
     {
      case 1:
           printf("enero");
           break;
      case 2:
           printf("Febrero");
           break;
     case 3:
          printf("Marzo");
          break;
     case 4:
          printf("Abril");
          break;
     case 5:
          printf("Mayo");
          break;
     case 6:
          printf("Junio");
          break;
     case 7:
          printf("Julio");
          break;
     case 8:
          printf("Agosto");
          break;
     case 9:
          printf("Septiembre");
          break;
     case 10:
          printf("Octubre");
          break;
     case 11:
          printf("Noviembre");
          break;
     case 12:
          printf("Diciembre");
          break;
     default:
          printf("Mes invalido");
          break; 
     }
  }
   int main()
       {
       imprimir_mes(6);
       return 0;
       } 

