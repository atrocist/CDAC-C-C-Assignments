#include<stdio.h>
main()
{
	int a[10][10],i,j,sum=0,m,n;
	printf("\nEnter the values of m,n : ");
	scanf("%d%d",&m,&n);

	printf("\nEnter the elements of matrix : ");
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);

	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			if(i==j)
			sum=sum+a[i][j];

	printf("\nTrace of a matrix=%d\n\n",sum);
}
