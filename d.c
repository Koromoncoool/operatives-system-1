#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main()
{
int a,b,c,d,e;

    for(a = 0;a < 4;a++){
     if(fork() == 0){
      if(a == 0){
       for(b = 0; b < 2;b++){
        if(fork() == 0){       
             if(b == 1){
          for(c = 0; c < 2;c++){
             if(fork() == 0){
              if( a == 2){
              for(d = 0; d < 2;d++){
             if(fork()== 0){
              if(d == 1)break;{
               for(e = 0; e < 2;e++){
             if(fork() == 1){
              if(e == 0)break;{
 
}
 }
          
}
 
}
 }
          
}
 
}
 }
          
}
break;
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




