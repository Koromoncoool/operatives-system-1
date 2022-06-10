#include<stdio.h>
int main()
{
  int i,a[10];
  for(i=0;i<10;i++)
    {
      printf("Escribe el numero %i\n",i+1);
      scanf("%d",&a[i]);

    while(a[i]<0)
        {
           printf("ponga un numero positivo");
           scanf("%d",&a[i]);
        }
    }
 for(i=0;i<10;i++)
   {
    printf("los numero son: %d\n",a[i]);
   }
}
