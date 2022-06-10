#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
int pares(){
int par,i=0;
for(par=1;par<=10000;par++)
   {
     if(par%2==0)
     {
      i +=par;
     }
   }
return i;
}


int main()
{
   int i,j,k,l;
for(i=0;i<5;i++){
if(fork()== 0){
  if(i==1){
    for(j=0;j<2;j++) {
      if(fork()==0){
        if(j==3){
          for(k=0;k<1;k++){
            if(fork()==0){
               break;
}

          }
        }
         break;
      }
    }
  }
  if(i==3){
    for(l=0;l<1;l++) {
      if(fork()==0){
printf("X = %d\n",getpid());
printf("la suma es %d \n",pares());
        if(l==0){
        }
         break;
      }
    }
  }


if(i==4){
    for(l=0;l<1;l++) {
      if(fork()==0){
        if(l==0){

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
