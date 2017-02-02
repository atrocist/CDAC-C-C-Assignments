#include<stdio.h>

int main()
{
	int num,i,j,k,l,m,n,flag=0,x,x1,x2,y1,y2,y;
	printf("Enter a number a four digit number\n");
	scanf("%d",&num);
	
	i=num%1000;
		j=num/1000;
		k=i%100;
	
		l=i/100;
	
		m=k%10;
	
		n=k/10;
	
		x=m+n;
	
		x1=x%10;
		x2=x/10;
		y=(j+n+l+m);
		y1=y%10;
		y2=y/10;
		printf("sum of %d is %d  sum of %d is %d ",num,y,y,(y1+y2),(y1+y2));
	}

	
	return 0;
}
