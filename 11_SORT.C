#include<stdio.h>
#include<conio.h>

void insertion(int [],int);
void bubble(int [],int);
void selection(int [],int);

void main()
{
	int a[30],i,j,k,op,n;
	clrscr();
	printf("\nPress 1:insertion sort\nPress 2:bubble sort\nPress 3:selection sort");
	printf("\nEnter proper choice :");
	scanf("%d",&op);
	switch(op)
	{
		case 1: printf("\nEnter the number of elements : ");
			scanf("%d",&n);
			printf("\nEnter the array elements : ");
			for(i=0;i<n;i++)
				scanf("%d",&a[i]);
			insertion(a,n);
			break;
		case 2: printf("\nEnter the number of elements : ");
			scanf("%d",&n);
			printf("\nEnter the array elements : ");
			for(i=0;i<n;i++)
				scanf("%d",&a[i]);
			bubble(a,n);
			break;
		case 3: printf("\nEnter the number of elements : ");
			scanf("%d",&n);
			printf("\nEnter the array elements : ");
			for(i=0;i<n;i++)
				scanf("%d",&a[i]);
			selection(a,n);
			break;
	}
	getch();
}

void insertion (int a[],int n)
{
	int i,j,temp;
	for(i=1;i<n;i++)
	{
		temp=a[i];
		for(j=i-1;j>=0 && a[j]>temp;j--)
			a[j+1]=a[j];
		a[j+1]=temp;
	}
	printf("The sorted array is : ");
	for(i=0;i<n;i++)
		printf("\t%d",a[i]);
}

void bubble(int a[],int n)
{
	int i,j,temp;
	int flag=1;
	for(i=0;i<n && flag==1 ;i++)
	{
		flag=0;
		for(j=0;j<n-i;j++)
		if(a[j]>a[j+1])
		{
			flag=1;
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
		}
	}
	printf("The sorted array is : ");
	for(i=0;i<n;i++)
		printf("\t%d",a[i]);

}

void selection(int a[],int n)
{
	int i,j,k,temp;
	for(i=0;i<n-1;i++)
	{
		k=i;
		for(j=i+1;j<n;j++)
		{
		       if(a[j]<a[k])
			k=j;
		}

		if(k!=i)
		{
			temp=a[i];
			a[i]=a[k];
			a[k]=temp;
		}
	}
	printf("The sorted array is : ");
	for(i=0;i<n;i++)
		printf("\t%d",a[i]);

}
