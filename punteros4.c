#include<stdio.h>
void main()
{
  int *px, *py;
  static int a[6]={1,2,3,4,5,6};
  px=&a[0];
  py=&a[5];
  printf("px=%x  py=%x",px,py);
  printf("\n py - px=%x",py-px);
}
