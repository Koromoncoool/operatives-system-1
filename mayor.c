//este programa nos ayuda a saber que numero es mayor al otro
#include<stdio.h>
int main(){

int mayor = 0;
int num;
int Cont = 1;



do{
printf("Introduce un numero: ");       
 scanf("%d",&num);
  if (num > mayor)
   mayor=num;
    Cont++;

}while((num <= 100000 ) && (num >= 0)) ;

printf("el numero mayor es:%d\n",mayor);

}
