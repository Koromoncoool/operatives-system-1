#include<stdio.h>
#include<stdlib.h>
#include <string.h>

typedef struct
{
 int codigo;
 char descripcion[30];
 float precio;
}tproducto;

void continuar()
{
 printf("Presione una tecla para continuar\n\n");
}

void crear()
{
 FILE *arch;
 arch=fopen("productos.dat","wb");
 if (arch==NULL)
    exit(1);
 fclose(arch);
 continuar();
}

void cargar()
{
 FILE *arch;
 arch=fopen("productos.dat","ab");
 if (arch==NULL)
     exit(1);
 tproducto producto;
 char codigo[30], precio[30];
 printf("Ingrese el codigo del producto:");
 fgets(codigo, 30, stdin);
 producto.codigo = atoi(codigo);
 printf("Ingrese el nombre del producto:");
 fgets(producto.descripcion, 30, stdin);
 printf("Ingrese precio:");
 fgets(precio, 30, stdin);
 producto.precio = atof(precio);
 fwrite(&producto, sizeof(tproducto), 1, arch);
 fclose(arch);
 continuar();
}



void listado()
{
 FILE *arch;
 arch=fopen("productos.dat","rb");
 if (arch==NULL)
    exit(1);
 tproducto producto;
 fread(&producto, sizeof(tproducto), 1, arch);
 while(!feof(arch))
      {
       printf("\n%i %s %f\n", producto.codigo, producto.descripcion, producto.precio);
       fread(&producto, sizeof(tproducto), 1, arch);
      }
fclose(arch);
continuar();
}

void consulta()
{
 FILE *arch;
 arch=fopen("productos.dat","rb");
 if (arch==NULL)
    exit(1);
 printf("Ingrese el codigo de producto a consultar:");
 int cod;
 scanf("%i", &cod);
 tproducto producto;
 int existe=0;
 fread(&producto, sizeof(tproducto), 1, arch);
 while(!feof(arch))
      {
       if (cod == producto.codigo)
        {
         printf("\n%i \n%s %f\n", producto.codigo, producto.descripcion, producto.precio);
         existe=1;
         break;
        }
       fread(&producto, sizeof(tproducto), 1, arch);
      }
 if (existe==0)
 printf("No existe un producto con dicho codigo\n");
 fclose(arch);
 continuar();
}

void modificacion()
{
 FILE *arch;
 arch=fopen("productos.dat","r+b");
 if (arch==NULL)
   exit(1);
 printf("Ingrese el codigo de producto a modificar:");
 int cod;
 scanf("%i", &cod);
 tproducto producto;
 int existe=0;
 fread(&producto, sizeof(tproducto), 1, arch);
 while(!feof(arch))
     {
      if (cod==producto.codigo)
        {
         printf("\n %i \n%s %f\n", producto.codigo, producto.descripcion, producto.precio);
         printf("Ingrese nuevo precio:\n");
         scanf("%f",&producto.precio);
         int pos=ftell(arch)-sizeof(tproducto);
         fseek(arch,pos,SEEK_SET);
         fwrite(&producto, sizeof(tproducto), 1, arch);
         printf("Se modifico el precio para dicho producto.\n");
         existe=1;
         break;
       }
     fread(&producto, sizeof(tproducto), 1, arch);
    }
 if (existe==0)
 printf("No existe un producto con dicho codigo\n");
 fclose(arch);
 continuar();
}

int main()
{
 char opcion[5] = "";
 int opcion2 = 0;
 do
  {
   printf("1 - Crear un archivo binario llamado \"productos.dat\"\n");
   printf("2 - Carga de registros de tipo tproducto\n");
   printf("3 - Listado completo de productos.\n");
   printf("4 - Consulta de un producto por su codigo.\n");
   printf("5 - Modificacion del precio de un producto. \n");
   printf("6 - Finalizar\n");
   printf("Ingrese su opcion:\n");
   fgets(&opcion, 5, stdin);
   opcion2 = atoi(opcion);
   switch (opcion2)
        {
         case 1:
         crear();
         break;

         case 2:
         cargar();
         break;

         case 3:
         listado();
         break;

         case 4:
         consulta();
         break;

         case 5:
         modificacion();
         break;
       }
  } while (opcion2!=6);
   return 0;
}

