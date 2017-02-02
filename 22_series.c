#include<stdio.h>

void main()

{
	int i,n,x;
	float res,ans=0,prod1=1,prod2=1;
	printf(" Enter the number of terms : ");
	scanf("%d",&n);
	printf("\nEnter the value of x : ");
	scanf("%d",&x);

	for(i=1;i<n;i++)
	{
		prod1=prod1*x;
		prod2=prod2*i;
		res=prod1/prod2;
		ans=ans+res;
	}
	ans++;
		printf("\n The evaluation of series is %f",ans);
}
