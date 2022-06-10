#include <stdio.h>
/*rb solo lectura
 wb solo escribe si se escribe de nuevo destruye
 ab solo escritura pero solo añade no destruye
 r+b permite leer y escribir si ya existe el archivo
 w+b permite escritura y lectura crea el archivo y si exite lo destruye
 a+b permite añadir en el modo lectura y crea el archivo y si existe no destruye solo agrega

*/
int main(int argc,char** argv)
{
  FILE *temperatura = fopen("temperatura.data","r");
  if(!temperatura)
  {
    printf("No he podido abrir el archivo\n");
    return 1;
  }
  char buffer[80];

  if(fgets(buffer,80,temperatura))
  {
    printf("%s\n",buffer);
  }
  if(fgets(buffer,80,temperatura))
  {
    printf("%s\n",buffer);
  }
  fclose(temperatura);
}
