#include <stdio.h>

int main(int argc,char** argv)
{
/*
  FILE *temperatura = fopen("temperatura.data","r");
  if(!temperatura)
  {
    printf("No he podido abrir el archivo\n");
    return 1;
  }
  fseek(temperatura,0,SEEK_END);
  long tam=ftell(temperatura);
  rewind(temperatura);
  printf("El archivo tiene %ld bytes \n",tam);
  fclose(temperatura);
  */
  FILE *temperatura = fopen("temperatura.data","r");
  if(!temperatura)
  {
    printf("No he podido abrir el archivo\n");
    return 1;
  }

  long pos=ftell(temperatura);
  printf("El cursor esta en el : %ld \n",pos);
  fclose(temperatura);
}
