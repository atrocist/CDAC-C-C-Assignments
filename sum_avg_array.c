#include<stdio.h>
void main()
{
 int a[5];

 int i,sum=0,n;
 
 float avg;
 printf("Enter the no of elements:\n");
 scanf("%d",&n);
 printf("Enter the array elemtns\n");

 for (i=0;i<5;i++)
  
 scanf("%d",&a[i]);

  for (i=0;i<5;i++)

  sum=sum+a[i];
  

  avg=(float)sum/n;

  printf("\n sum of array elements = %d",sum);
 
  printf("\n average of array elements = %f",avg);



}
