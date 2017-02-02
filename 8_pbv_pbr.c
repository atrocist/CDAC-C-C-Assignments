#include<stdio.h>
void pbv(int x,int y);
void pbr(int *x,int*y);
int main()
{
	int a=20,b=10;

	printf("\ninitially  a::%d\tb::%d\n",a,b);
	pbv(a,b);
	printf("\nafter pbv a::%d\tb::%d\n",a,b);
	pbr(&a,&b);

	printf("\nafter pbr a::%d\tb::%d\n",a,b);
	return 0;
}

void pbv(int x,int y)
{
	
	printf("\ninitially x::%d\ty::%d\n",x,y);
	x=x+y;
	y=x-y;
	x=x-y;
	printf("\nx::%d\ty::%d\n",x,y);

}
void pbr(int *x,int *y)
{
	int temp=0;
	temp=*x;
	*x=*y;
	*y=temp;

}
