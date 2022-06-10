//ps -fe ver los procesos activos en linux
//ctr c detiene ciclos
#include<unistd.h>
#include<stdio.h>

int main()
{
  int pld;
  pld = fork();

  if(pld>0){
  printf("Soy el proceso padre\n");
  while(1);
  }
  else {
        if(pld==0){
          printf("Soy el proceso hijo\n");
          while(1);
          }else{
            printf("Error\n");
          }
  }
}
