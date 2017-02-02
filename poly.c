#include<stdio.h>
int powr(int x,int y);
int main()
{

	int poly [50][2]={0};
	int coef=0,expo=0,i,j;
	char opt='y';
	int arrmax=0,x=0,ans=0;

	while(opt!='n')
	{
		printf("\nenter the coefficient::\t");
		scanf("%d",&coef);
		printf("\nenter the exponent::\t");
		scanf("%d",&expo);
		for(i=0;i<arrmax;i++)
		{
			if(poly[i][0]==expo)
			{
				poly[i][1]=poly[i][1]+coef;
				break;
			}
		}
		if(i==arrmax)
		{
			poly[i][0]=expo;
			poly[i][1]=coef;
			arrmax++;			
		}
		printf("do you wish to add more terms y for yes n for no::");
		scanf("%c",&opt);
		scanf("%c",&opt);


	}
	int temp[1][2]={0};
	for(i=0;i<=arrmax;i++)
	{
			for(j=i+1;j<arrmax;j++)
			{
				if(poly[i][0]>poly[j][0])
				{
				
					temp[0][0]=poly[i][0];
					temp[0][1]=poly[i][1];

					poly[i][0]=poly[j][0];
					poly[i][1]=poly[j][1];

					poly[j][0]=temp[0][0];
					poly[j][1]=temp[0][1];
				}
			}
	
	}

	printf("\nyour polynomial is::\n");
	for(i=0;i<arrmax;i++)
	{
		printf("%dX^%d",poly[i][1],poly[i][0]);
		if( i<arrmax-1)
		{
			if(poly[i+1][1]>=0)
				printf(" + ");
			else
				printf(" - ");
		}
	}
	printf("\n enter the value of x::\t");
	scanf("%d",&x);
	ans=0;
	for(i=0;i<arrmax;i++)
	{
		ans=ans+(poly[i][1]*(powr(x,poly[i][0])));
	}
	printf("\nans::  %d\n",ans);
	return 0;
}

int powr(int x,int y)
{
	int i,j=1;
	for(i=0;i<y;i++)
	{
		j=j*x;
	}
	return j;
}
