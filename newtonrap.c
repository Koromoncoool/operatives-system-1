#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void resu(float x ,float *x1,float *x2)
{
   *x1 = cos(x)-pow(x,3);
   *x2 = -sin(x)-(3.0*x*x);
}


int main()
{
  float x,tempo,e;
  float x1,x2;
  int i=0;

  printf("Ingrese el valor de x:");
  scanf("%f",&x);

  do
  {
     resu(x,&x1,&x2);
     tempo=x;
     x=x-(x1)/(x2);
     e=fabs((x-tempo)/x);
      printf("x %d-%f error-%f\n",i,x,e);

  }while((x !=tempo) && (i < 100));

        if(i==100)
        {
         printf("\n No es convergente");
        }
        else
        {
         printf("\n la solucion es: %f",x);
        }

}
