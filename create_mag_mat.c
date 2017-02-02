#include<stdio.h>

int main()
{
	int arr[3][3]={0};
	int arr2[3];
	int i,j,n=2;
	int z=0,x=0,sum=0,y=0;

	srand(time(0));
//	for(i=0;i<3;i++)
//		arr2[i]=rand()%100;	
	for(i=0;i<3;i++)
	{
			arr[i][i]=rand()%100;
			sum=sum+arr[i][i];			
	}
	arr[0][2]=(rand()%1000);
	arr[0][1]=(rand()%100);
	arr[1][0]=(rand()%10);
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i!=j)
			{
				arr[n-i][n-j]=sum-arr[1][1]-arr[i][j];
			}
		}
	}
	printf("\nthe magic matrix is\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			
			printf("%4d",arr[i][j]);
		}
		printf("\n");
	}


	return 0;
}
