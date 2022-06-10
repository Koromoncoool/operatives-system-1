#include <stdio.h>
#include<stdlib.h>

void crear()
{
 FILE *arch;
 arch=fopen("archivo5.dat","wb");
 if(arch==NULL)
    exit(1);
 int valor;
 do
 {
   printf("Ingrese un valor entero (0 para finalizar)");
   scanf("%i",&valor);
   if(valor !=0)
    fwrite(&valor,sizeof(int),1,arch);
 }while(valor!=0);
 fclose(arch);
}


void imprimir()
{
 FILE *arch;
 arch=fopen("archivo5.dat","rb");
 if(arch==NULL)
    exit(1);
 printf("todos los archivos almacenados\n");
 int x;
 fread(&x,sizeof(int),1,arch);
 while (!feof(arch))
 {
 printf("%i\n",x);
 fread(&x,sizeof(int),1,arch);
 }
fclose(arch);
}

int main()
{
 crear();
 imprimir();
 return 0;
}
