#include<stdio.h>

int main()
{
	int num=0,m=0;
	char str[4]={"123"};

	num=(str[m]-48)*100+(str[m+1]-48)*10+(str[m+2]-48);
	printf("string converted to number is: %d\n",num);

	return 0;
}
