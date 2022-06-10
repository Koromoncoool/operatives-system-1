#include <stdio.h>
#include<stdlib.h>

int main()
{
 int v1,v2;
 float f1,f2;
 FILE *arch;
 arch=fopen("archivo2.dat","rb");
 if(arch==NULL)
    exit(1);
 fread(&v1,sizeof(int),1,arch);
 printf("Primer numero entero:%i\n",v1);
 fread(&v2,sizeof(int),1,arch);
 printf("Segundo numero entero:%i\n",v2);
 fread(&f1,sizeof(float),1,arch);
 printf("Primer numero flotante:%0.2f\n",f1);
 fread(&f2,sizeof(float),1,arch);
 printf("Segundo numero flotante:%0.2f\n",f2);
 fclose(arch);
 return 0;
}
