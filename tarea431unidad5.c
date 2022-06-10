#include <stdio.h>
#include<stdlib.h>

void crear()
{
 FILE *arch;
 arch=fopen("archivo4.dat","wb");
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

void modificar()
{
 FILE *arch;
 arch=fopen("archivo4.dat","r+b");
 if(arch==NULL)
    exit(1);
fseek(arch,4,SEEK_SET);
int x=100;
fwrite(&x,sizeof(int),1,arch);
fclose(arch);
}

void imprimir()
{
 FILE *arch;
 arch=fopen("archivo4.dat","rb");
 if(arch==NULL)
    exit(1);
int va1,va2,va3;
 fread(&va1,sizeof(int),1,arch);
 printf("Primer numero entero:%i\n",va1);
 fread(&va2,sizeof(int),1,arch);
 printf("Segundo numero entero:%i\n",va2);
 fread(&va3,sizeof(int),1,arch);
 printf("Tercer numero entero:%i\n",va3);
fclose(arch);
}

int main()
{
 crear();
 modificar();
 imprimir();
}
