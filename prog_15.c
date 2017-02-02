#include<stdio.h>

struct name
{
	int a;
	int b;
	struct s
	{
		int c;
		int d;
	}s2;

};

int main()
{
	struct name s1={10,20};
	struct s s3={30,40};
	//s3.c=30;
	
	printf("%d %d\n",s3.c,s3.d);

	return 0;
}
