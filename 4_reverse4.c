#include<stdio.h>

int main()
{
	int no,a,b,c,d;

	
	printf("\nenter the number\n");
	scanf("%d",&no);
	
	a=no%10;
	b=no%100/10;
	c=no%1000/100;
	d=no/1000;
	no=(a*1000)+(b*100)+(c*10)+d;

	printf("\nreversed number is %d\n",no);



	return 0;
}


