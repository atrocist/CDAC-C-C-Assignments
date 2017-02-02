#include<stdio.h>
int test(int,int,int(*fp)(int,int));

int sum(int,int);

int (*fp)(int,int);

int  main()
{
 int x,y,z;
 int ans=0;
 int (*fp)(int,int);
 fp=sum;
 printf("Enter no 1 :\n");
 scanf("%d",&x);
 printf("Enter no 2 :\n");
 scanf("%d",&y);
 
ans= test(x,y,fp);
 
 printf("Sum of %d and %d is %d \n",x,y,ans);

return 0;
}

int sum(int x,int y)
{
	int res=0;
	res=x+y;
	return res;
}

int test(int x,int y,int(*fp)(int,int))
{

	int z=fp(x,y);
        return z;

}
