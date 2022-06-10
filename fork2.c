#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

int main()
{
int i;
for(i=0;i<7;i++)
{
 if(fork()==0) break;
}
  /*fork();
  fork();
  fork();
  */
  printf("Soy un proceso: %d\n",getpid());
  while(1);
}
