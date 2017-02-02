#include<stdio.h>
#include<conio.h>

int main()
{
	int a,b;
	clrscr();
	printf("\nenter the two numbers \n");
	scanf("%d%d",&a,&b);
	(a>b)?printf("\n%d is greater than %d\n",a,b):(a==b)?printf("\n%d is equal to %d\n",a,b):printf("\n%d is greater than %d\n",b,a);
	getch();
	return 0;
}