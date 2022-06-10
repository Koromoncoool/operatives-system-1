 #include<stdio.h>
int main()
{
      int opc;
      do{
         printf("Menu\n");
         printf("1.Registrar alumnos\n");
         printf("2.Borrar alumnos\n");
         printf("3.modificar alumno\n");
         printf("4.Consultar ALumnos\n");
         printf("5.Salir\n");
         printf("ponga su opcion: ");
         scanf("%d",&opc);

             switch(opc)
             {
               case 1:
               break;

               case 2:
               break;

               case 3:
               break;

              case 4:
              break;

              case 5:
              break;

              default:
              printf("Opcion invalida\n");
              break;
            }

      }while(opc != 5);
}

