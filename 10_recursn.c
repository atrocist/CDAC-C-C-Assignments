#include<stdio.h>

int main()
{
	int n=0;
	int res=0;
	printf("\nenter the number\n");
	scanf("%d",&n);
	res=facto(n);

	printf("\nfacto(%d)::%d\n",n,res);
	res=sumn(n);
	printf("\nsum(%d)::%d\n",n,res);
	int i;
	for(i=0;i<n;i++)
		printf("\n%d\n",fib(i));
	int n1,n2;
	printf("\nenter the two number\n");
	scanf("%d%d",&n1,&n2);
	res=gcd(n1,n2,n1);

	printf("\ngcd(%d,%d)::%d\n",n1,n2,res);

	return 0;

}
int fib(int cnt)
{
	if((cnt==1) || (cnt==0))
		return 1;
	else
		return (fib(cnt-1) + fib(cnt-2));
	
}
int gcd(int n1,int n2,int i)
{
	if(n1%i==0 && n2%i==0)
		return i;
	else
		return gcd(n1,n2,i-1);
}
int sumn(int n)
{
	if(n==0)
		return 0;
	else
		return (n+sumn(n-1));
	
	
}

int facto(int n)
{

	if(n==0)
		return 1;
	else
		return (n*facto(n-1));
}
