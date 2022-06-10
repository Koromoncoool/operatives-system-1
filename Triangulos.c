#include<stdio.h>
#include<math.h>

int main()
{
    float hipotenusa,cateto1,cateto2;
    for(int i=1;i<=10;i++)
    {
    printf("Digite el 1er cateto del triangulo:");
    scanf("%f",&cateto1);
    printf("Digite el 2do cateto triangulo:");
    scanf("%f",&cateto2);

    hipotenusa = sqrt(pow(cateto1,2)+pow(cateto2,2));
    
    printf("La hipotenusa del triangulo es:%.2f\n",hipotenusa);
   }
   return 0;
}
