#include<stdio.h>

int main()
{
	int i,j,n;

	printf("Enter number of elements in array\n");
	scanf("%d",&n);

	int a[n];

	printf("Enter array elements\n");
	for(i=0;i<n;i++)
	scanf("%d",(a+i));

       	for(i=0;i<n;i++)
	printf("%d\t",*(a+i));

       }
