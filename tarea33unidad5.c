#include <stdio.h>
#include<stdlib.h>

int main()
{
 FILE *arch;
 arch=fopen("archivo1.dat","rb");
 if(arch==NULL)
 exit(1);
 fseek(arch,5,SEEK_SET);
 float v2;
 fread(&v2,sizeof(float),1,arch);
 printf("float: %0.2f",v2);
 fclose(arch);
 return 0;
}
