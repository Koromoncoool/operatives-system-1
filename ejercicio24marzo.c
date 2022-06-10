//estructura donde,tengamos puntos en earea carteciano pedir al suario los 2 puntos xy1,xy2 raiz de x2-x2 alcuadrado + y2-y1 al cuadrado
#include<stdio.h>
#include<math.h>

struct puntos
{
   float x1;
   float y1;
   float x2;
   float y2;
   float distancia;
}punt[2];
void captura()
{


  for(int i=0;i<1;i++)
  {
    printf("Ingrese el valor de x1:");
    scanf("%f",&punt[i].x1);
    printf("Ingrese el valor de x2:");
    scanf("%f",&punt[i].x2);
    printf("Ingrese el valor de y1:");
    scanf("%f",&punt[i].y1);
    printf("Ingrese el valor de y2:");
    scanf("%f",&punt[i].y2);
    punt[i].distancia = sqrt(pow(punt[i].x2 - punt[i].x1, 2) + pow(punt[i].y2 - punt[i].y1, 2));
    printf("\n la distancia es : %.2f\n", punt[i].distancia);
  }


}

int main()
{
  captura();

}
