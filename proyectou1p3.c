#include<stdio.h>
int main()
{
 
     int opcion;
     float saldo = 100;
 do{
     float agregar,retirar;

     printf("\n Cajero");
     printf("\n1.Consultar");
     printf("\n2.ingreso");
     printf("\n3.Retiro");
     printf("\n4. Salir");
     printf("\n Opcion: ");
     scanf("%i",&opcion);

   switch(opcion)
        {
          case 1:
          printf("El saldo es de: %.2f", saldo);
          break;

          case 2: printf("\nCuanto dinero desea ingresar de la cuenta");
          scanf("%f", &agregar);
          saldo += agregar;
          break;

          case 3: 
          printf("Cuanto dinero desea retirar: ");
          scanf("%e",&retirar);
          if(retirar > saldo)
            {
             printf("La cantidad a retirar es mayor al saldo");
            }
          else
             {
              saldo -= retirar;
             }

      
          case 4: 
          break;
       
          default: 
          printf("Se equivoco de opcion de menu");
        }
         }while(opcion !=4);
         return 0;
}

  
