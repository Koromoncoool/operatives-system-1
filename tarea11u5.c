#include <stdio.h>

int main(int argc,char** argv)
{
  FILE *temp = fopen("temporal.txt","w");
  if(!temp)
  {
    printf("No he podido abrir el archivo\n");
    return 1;
  }
  int result=fputs("Hola buenos dias",temp);
  if(result==EOF)
  {
    printf("UPS, algo salio mal");
  }
  else
  {
   printf("Hemos EScrito %c/n",result);
  }
  fclose(temp);
}
