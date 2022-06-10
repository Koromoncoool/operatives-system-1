#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

int main()
{
   int i,j,k;

for(i=0;i<4;i++){
  if(fork()==0){
  if(i==2){
    for(j=0;j<1;j++) {
      if(fork()==0){
        if(j==0){
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

