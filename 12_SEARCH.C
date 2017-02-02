#include<stdio.h>
#include<conio.h>

int binary(int[],int,int,int);
int linear(int[],int,int);

void main()
{
	int i,key,a[30],op,position,n;
	clrscr();
	do{
		printf("\nPress 1 : for binary search\nPress 2 : for linear search\nPress 3 : to exit");
		printf("\nEnter proper choice : ");
		scanf("%d",&op);
		switch(op)
		{
			case 1: printf("\nEnter the number of elements : ");
				scanf("%d",&n);
				printf("\nEnter the sorted elements of the array : ");
				for(i=0;i<n;i++)
					scanf("%d",&a[i]);
				printf("\nEnter the element to be searched : ");
				scanf("%d",&key);
				position=binary(a,0,n-1,key);
				if(position==-1)
					printf("\nNot found...");
				else
					printf("\nElement found at location =%d",position+1);
				break;
			case 2: printf("\nEnter the number of elements : ");
				scanf("%d",&n);
				printf("\nEnter the sorted elements of the array : ");
				for(i=0;i<n;i++)
					scanf("%d",&a[i]);
				printf("\nEnter the element to be searched : ");
				scanf("%d",&key);
				position=linear(a,n,key);
				if(position==-1)
					printf("\nNot found...");
				else
					printf("\nElement found at location =%d",position+1);
				break;
		}
	}while(op!=3);
	getch();
}

int binary(int a[],int i,int j,int key)
{
	int c;
	c=(i+j)/2;
	if(i>j)
		return (-1);
	if(a[c]==key)
		return c;
	if(key>a[c])
		return (binary(a,c+1,j,key));
	else
		return (binary(a,i,c-1,key));
}

int linear(int a[],int n,int key)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(a[i]==key)
			return i;
	}
	return -1;
}