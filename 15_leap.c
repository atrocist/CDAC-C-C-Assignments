#include<stdio.h>

int main()
{
	int i,j,k,leap,flag=0;
	printf("Enter leap year\n");
	scanf("%d",&leap);

	if(leap%4==0)
	{
		if(leap%100==0 && leap%400==0)
			printf("Leap year\n");
	        else
	          flag=1;		
        }
        else
		printf("Not a Leap year");
	if(flag==1)
        printf("Leap year\n");

}
