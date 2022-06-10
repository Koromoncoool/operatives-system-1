#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main()
{
int i,j,k;

    for(i = 0;i < 1;i++){
     if(fork() == 0){
      if(i == 0){
       for(j = 0; j < 1;j++){
        if(fork() == 0){       
             if(j == 0){
          for(k = 0; k < 3;k++){
             if(fork() == 0){
              if(k!=2)break;{
}
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




