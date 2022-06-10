#include <stdio.h>

int main(int argc,char** argv)
{
  FILE *temperatura = fopen("temperatura.data","r");
  if(!temperatura)
  {
    printf("No he podido abrir el archivo\n");
  }

  do
  {
    int leido = fgetc (temperatura);
    if(!leido !=EOF)
    {
       printf("%c",(char)leido);
    }
    else
    {
      printf("\n==FIN==");
    }
  }while(!feof(temperatura));
  fclose(temperatura);
  return 1;
}
