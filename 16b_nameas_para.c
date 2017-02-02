#include<stdio.h>
int sum(int,int);
int main()
{
	int a,b;
	int (*fptr)(int,int);

	fptr=sum;

        printf("Enter first number\n");
	scanf("%d",&a);

        printf("Enter second number\n");
	scanf("%d",&b);

	fptr=sum(a,b);

	printf("Addition of %d and %d is %d \n",a,b,*fptr);
        return 0;
}

int sum(int a,int b)
{
	int res;
	res=a+b;
	return res;
}
