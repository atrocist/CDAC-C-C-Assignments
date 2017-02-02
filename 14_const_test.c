#include<stdio.h>
void main()
{
  int x=20,y;
  const int * const p4=&x;
  p4=&y;
  *p4=20;
  printf("add of p4 is %u",p4++);


}
