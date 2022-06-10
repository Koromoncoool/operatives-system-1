#include <stdio.h>
#include<stdlib.h>

void crear()
{
 FILE *arch;
 arch=fopen("archivo3.dat","wb");
 if(arch==NULL)
    exit(1);
 int v1=10;
 fwrite(&v1,sizeof(int),1,arch);
 int v2=20;
 fwrite(&v2,sizeof(int),1,arch);
 int v3=10;
 fwrite(&v3,sizeof(int),1,arch);
 fclose(arch);
}

void agregar()
{
 FILE *arch;
 arch=fopen("archivo3.dat","ab");
 if(arch==NULL)
    exit(1);
float f1=5.55;
fwrite(&f1,sizeof(float),1,arch);
fclose(arch);
}

void imprimir()
{
 FILE *arch;
 arch=fopen("archivo3.dat","rb");
 if(arch==NULL)
    exit(1);
int va1,va2,va3;
float f1;
 fread(&va1,sizeof(int),1,arch);
 printf("Primer numero entero:%i\n",va1);
 fread(&va2,sizeof(int),1,arch);
 printf("Segundo numero entero:%i\n",va2);
 fread(&va3,sizeof(int),1,arch);
 printf("Tercer numero entero:%i\n",va3);
 fread(&f1,sizeof(float),1,arch);
 printf("Primer numero flotante:%0.2f\n",f1);
fclose(arch);
}

int main()
{
 crear();
 agregar();
 imprimir();
}
