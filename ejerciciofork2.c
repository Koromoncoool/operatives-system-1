#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
int a,b,c;

for(a = 0; a < 2;a++){
 if(fork()==0){
  if(a ==1 ){
    for(b = 0; b < 2;a++){
       if(fork()==0){
        if(b ==1){
         for(c = 0; c < 2;c++){
           if(fork()==0){
            if(c !=1)break;{
                    }
                  }
                }
              }break;
            }
          }
         }break;
       }
     }
while(1);
   }
