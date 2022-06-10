#include <stdio.h>

struct medicion
{
  unsigned short anio;
  unsigned char mes;
  unsigned char dia;
  float temperatura;
  unsigned char uv;
  unsigned char viento;
};

void printf_medicion(struct medicion *medicion)
{
 printf("Fecha: %d-%d-%d, Registro %f'C. UV %d, Viento %d km/h \n",
 medicion->anio,medicion->mes,medicion->dia,
 medicion->temperatura,medicion->uv,medicion->viento);
}

int main(int argc,char** argv)
{
/*
  struct medicion medida[]={
  {
    .anio=2020, .mes=11,.dia=9,.temperatura=12.5,.uv=4,.viento=15.0
  },
  {
    .anio=2020, .mes=11,.dia=9,.temperatura=12.5,.uv=4,.viento=15.0
  },
  {
    .anio=2020, .mes=11,.dia=9,.temperatura=12.5,.uv=4,.viento=15.0
  },
  {
    .anio=2020, .mes=7,.dia=24,.temperatura=40,.uv=8,.viento=0
  },
  {
    .anio=2020, .mes=1,.dia=-3,.temperatura=1,.uv=4,.viento=80
  },
  };*/
  struct medicion medida[5];
  FILE *fp=fopen("temperatura.bin","rb");
  int total = fread(&medida,sizeof(struct medicion),5,fp);
  if(total !=5 )
  {
    printf("Error de escritura");
  }
  fclose(fp);
  for(int i=0;i<5;i++)
  {
    printf_medicion(&medida[i]);
  }
}
