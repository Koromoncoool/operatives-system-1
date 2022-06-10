#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

int main()
{
   int i,j,k;
for(i=0;i<3;i++){  
if(fork()== 0){
  if(i==0){
    for(j=0;j<2;j++) {
      if(fork()==0){
        if(j==1){
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
if(i==2)
printf("A = %d\n",getpid());

  if(i==1){
    for(j=0;j<2;j++) {
      if(fork()==0){
        if(j==0){
          for(k=0;k<1;k++){
            if(fork()==0){
printf("B = %d\n",getpid());
int num[10];
int i,j,d;
for(int i=0;i<10;i++)
{
num[i]=rand()%10;
}
for(i=0;i<10;i++)
{
printf("\n %d",num[i]);
}
for(j=0;j<10;j++)
{
for(i=0,d=1;d<10;i++,d++)
{
if(num[i]>num[d])
{
int temp=num[d];
num[d]=num[i];
num[i]=temp;
}
}
}
for(j=0;j<10;j++)
{
printf(" \nel numero ordenado es %d\n",num[j]);
}
return 0;

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
