#include <stdio.h>
#include<stdlib.h>
#include <string.h>
#include<time.h>


void crear()
{
 FILE *arch;
 arch=fopen("Examen5-2.dat","wb");
 if(arch==NULL)
    exit(1);
  srand(time(NULL));
   for(int i=1;i<=50;i++)
   {
     int entero=1+rand()%(50-1+1);
    fwrite(&entero,sizeof(int),1,arch);
   }
   for(int j=1;j<=50;j++)
   {
      float flotante=1+rand()%(50-1+1);
      fwrite(&flotante,sizeof(float),1,arch);
   }
 fclose(arch);
}


void imprimir()
{
 FILE *arch;
 arch=fopen("Examen5-2.dat","rb");
 if(arch==NULL)
    exit(1);
 int x;
 float y;
 fread(&x,sizeof(int),1,arch);
 fread(&y,sizeof(float),1,arch);
 while (!feof(arch))
 {
  // int pos = ftell(arch) +200;
   fseek(arch, pos, SEEK_SET);
   //fread(&x, sizeof(int), 1, arch);
   fread(&y,sizeof(float),1,arch);
  printf("---------------------------------\n");
  printf("\n%f \n",y);
 }
fclose(arch);
}

int main()
{
 crear();
 imprimir();
}
