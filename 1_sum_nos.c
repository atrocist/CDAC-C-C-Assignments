#include<stdio.h>
int sum(int);
void main()
{
 
	int x,add;
 	printf("\n Enter how many numbers to be summed \n");
        scanf("%d",&x);
        add=sum(x);
	printf("Addition of %d numbers is %d \n",x,add);
        
}
int sum(int n)
{
	int res=0;
	if (n==0)
	  return 1;
	else
	       	res=n+sum(n-1);
	  return (res);                
}
