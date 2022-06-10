#include <stdio.h>
#include<stdlib.h>
#include <string.h>


void crear()
{
 FILE *arch;
 arch=fopen("Examen5.dat","wb");
 if(arch==NULL)
    exit(1);
  char claveProducto[30],nombre[30],precio[30];
   for(int i=1;i<=5;i++)
   {
    printf("Ingrese la clave del producto %i: ",i);
    scanf("%s",&claveProducto);
    fwrite(&claveProducto,sizeof(char),30,arch);

    printf("Ingrese el nombre del producto: ");
    scanf("%s",&nombre);
    fwrite(&nombre,sizeof(char),30,arch);

    printf("Ingrese el precio del producto: ");
    scanf("%s",&precio);
    fwrite(&precio,sizeof(char),30,arch);
   }
 fclose(arch);
}


void imprimir()
{
 FILE *arch;
 arch=fopen("Examen5.dat","rb");
 if(arch==NULL)
    exit(1);
 printf("lista de productos\n");
 char y[30],z[30];
 char x[30];
 while (!feof(arch))
 {
   fread(&y,sizeof(char),30,arch);
   fread(&x,sizeof(char),30,arch);
   fread(&z,sizeof(char),30,arch);
  printf("---------------------------------\n");
  printf("\n%s \n%s \n%s\n",y,x,z);
 }
fclose(arch);
}

int main()
{
 crear();
 imprimir();
}
