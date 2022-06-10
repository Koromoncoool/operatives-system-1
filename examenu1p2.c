#include<stdio.h>
int main()
{
   int i,j,n;
   printf("ingrese altura de la priramide\n");
   scanf("%d",&n);
   for(j=1;j<=n;j++)
   {
    for(i=1;i<=j;i++)
       printf("*");
    
    printf("\n");   
   }
}
