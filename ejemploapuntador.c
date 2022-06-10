#include<stdio.h>
#include<math.h>
void resu(float a,float b,float c,double *x1,double *x2,double r)
{
 *x1=((-1*b)+sqrt(r))/(2*a);
 *x2=((-1*b)-sqrt(r))/(2*a);
}
void main()
{
  float a,b,c;
  double r,x1,x2;
  printf("Escribe el valor de a:");
  scanf("%f",&a);
  printf("Escribe el valor de b:");
  scanf("%f",&b);
  printf("Escribe el valor de c:");
  scanf("%f",&c);

  r=pow(b,2)-4*a*c;
  if(r<0)
  {
    printf("Las partes son imaginarias");
  }
  else
  {
     resu(a,b,c,&x1,&x2,r);
     printf("\nx1=%lf",x1);
     printf("\nx2=%lf",x2);
  }

}
