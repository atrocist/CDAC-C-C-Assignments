#include<stdio.h>

int main()
{
	int i,j,k,num[4];
    printf("Enter three numbers\n");
	for(i=0;i<3;i++)
	{
		scanf("%d",&num[i]);
	}
	if(num[0]>num[1] && num[0]>num[1])
	printf("Greater number is %d",num[0]);
	
	else if(num[1]>num[0] && num[1]>num[2])
	printf("Greater number is %d",num[1]);
	
	else if(num[2]>num[0] && num[2]>num[1])
	printf("Greater number is %d",num[2]);
	
	return 0;
}