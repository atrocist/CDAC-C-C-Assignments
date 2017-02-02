#include<stdio.h>

int main()
{
	int i,j,num=1,denom=1,n,r;
	printf("Enter N\n");
	scanf("%d",&n);
	printf("Enter R\n");
	scanf("%d",&r);

        for(i=n;i>=n-r+1;i--)
	num=num*i;

	for(j=r;j>0;j--)
	denom=denom*j;

	printf("NcR =%d",(num/denom));
        return 0;
}
