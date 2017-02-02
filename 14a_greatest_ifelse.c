#include<stdio.h>

int main()
{
	int i,num[4];
	printf("Enter three numbers\n");
	for(i=0;i<3;i++)
	{
		scanf("%d",&num[i]);
	}
    if(num[0]>num[1])
	{
		if(num[0]>num[2])
		printf("Greater number is %d",num[0]);
		else
		printf("Greater number is %d",num[2]);
	}
	else
	{
		if(num[1]>num[2])
		printf("Freater number is %d",num[1]);
		else
		printf("Greater number is %d",num[2]);
	}
	return 0;
}
