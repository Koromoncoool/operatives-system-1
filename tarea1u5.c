#include <stdio.h>

int main(int argc,char** argv)
{
  FILE *temperatura = fopen("temperatura.data","r");
  if(!temperatura)
  {
    printf("No he podido abrir el archivo");
    return 1;
  }
  printf("Se se abre");
  fclose(temperatura);
  //tarea como meter texto desde la consola
}
