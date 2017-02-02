#include<stdio.h>

int main(int argc,char *argv[])
{
	int sum=0,avg=0;
	printf("No. of arguments are: %d\n",argc);
	int i;
	for(i=0;i<argc;i++)
		sum+=argv[i];

	avg=sum/argc;
	printf("Sum is %d \nAvg is %d\n",sum,avg);

	return 0;
}
	
