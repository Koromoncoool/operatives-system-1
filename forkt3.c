#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
int pares(){
int s,suma;
 suma=0;
 for(s=1;s<=100;s++)
 {
   suma=suma+s;
 }
 return suma;
}

int main()
{
   int i,j,k;

for(i=0;i<2;i++){
  if(fork()==0){
  if(i==1){
    for(j=0;j<2;j++) {
      if(fork()==0){
if(j==0)
printf("total = %d\n",pares());
        if(j==1){
          for(k=0;k<1;k++){
            if(fork()!=0){
               break;
            }

          }
}
         break;
      }
   }
  }
    break;
}
}

 while(1);
}
