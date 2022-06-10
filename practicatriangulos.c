#include<stdio.h>
#include<math.h>
int main()
   {
    float hipotenusa,cateto1,cateto2;
    
    printf("Digite el 1er cateto");
    scanf("%f",&cateto1);
    printf("Digite el 2do cateto");
    scanf("%f",&cateto2);

    hipotenusa = sqrt(pow(cateto1,2)+pow(cateto2,2));

    printf("La hipotenusa del triangulo es:%.2f",hipotenusa);
    return 0;
   }
