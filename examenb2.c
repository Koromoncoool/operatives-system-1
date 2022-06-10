#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main()
{
int a,b,c;
    for(a = 0;a < 4 ;a++){
     if(fork() == 0){
      if(a == 0){
       for(b = 0; b < 2;b++){
        if(fork() == 0){
             if(b == 0){
          for(c = 0; c < 1;c++){
             if(fork() == 0){
              if(c == 0)break;{

             }
           }
         }
        }

      break;
      }
    }
  }

if (a == 1){
 for(b = 0; b < 2;b++){
   if(fork() == 0){
     if(b == 0){
      for(c = 0; c < 1;c++){
       if(fork() == 0){
        if(c == 0)break;{
        }
       }
     }
    }
    if(b==1)
    if(getpid()%5==0)
    {
    printf("si es multiplo");
    printf("X = %d\n",getpid());
    }else{
    printf("no es multiplo");
    printf("\nX = %d\n",getpid());
    }
 break;
  }
 }
}
if (a == 2){
 for(b = 0; b < 2;b++){
   if(fork() == 0){
     if(b == 0){
      for(c = 0; c < 1;c++){
       if(fork() == 0){
        if(c == 0)break;{
        }
       }
     }
    }
 break;
  }
 }
}

if (a == 3){
 for(b = 0; b < 2;b++){
   if(fork() == 0){
     if(b == 0){
      for(c = 0; c < 1;c++){
       if(fork() == 0){
        if(c == 0)break;{
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
