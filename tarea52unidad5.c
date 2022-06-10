#include <stdio.h>
#include<stdlib.h>

void crear()
{
 FILE *arch;
 arch=fopen("archivo6.dat","wb");
 if(arch==NULL)
    exit(1);
 int valor;
 printf("Ingrese un valor enteros de entre 1 y :");
 scanf("%i",&valor);
 for(int i=1;i<=valor;i++)
    fwrite(&i,sizeof(int),1,arch);
 fclose(arch);

}


void imprimir()
{
 FILE *arch;
 arch=fopen("archivo6.dat","rb");
 if(arch==NULL)
    exit(1);
 printf("todos los datos almacenados\n");
 int x;
 fread(&x,sizeof(int),1,arch);
 while (!feof(arch))
 {
 printf("%d ",x);
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
