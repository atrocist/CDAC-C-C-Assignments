


	#include<stdio.h>
	#include<math.h>
	#include<conio.h>
	int main()
	{
		int n,m,a[100][100],b[100][100],c[100][100],sum,k;
		int ch,r,i,p,q,j;
		clrscr();
		printf("\n Enter the rows of the first matrix : ");
		scanf("%d",&n);
		printf("\n Enter the column of the first matrix : ");
		scanf("%d",&m);
	
		for(i=1;i<=n;i++)
		{	for(j=1;j<=m;j++)	
			{
				printf("\n Enter the element a[%d][%d] : ",i,j);
				scanf("%d",&a[i][j]);
			}
		}
		for(i=1;i<=n;i++)
		{	for(j=1;j<=m;j++)
			{
				printf("%d",a[i][j]);
				printf("\t");
			}
			printf("\n");	
		}

		printf("\n Enter the rows of the second matrix : ");
		scanf("%d",&p);
		printf("\n Enter the column of the second matrix : ");
		scanf("%d",&q);
		for(i=1;i<=p;i++)
		{	for(j=1;j<=q;j++)
			{
				printf("\n Enter the element b[%d][%d] : ",i,j);
				scanf("%d",&b[i][j]);
			}
		}
		for(i=1;i<=n;i++)
		{	for(j=1;j<=m;j++)
			{
				printf("%d",b[i][j]);
				printf("\t");
			}
			printf("\n");
		}

		do
		{
			printf("\n 1:Addition 2:Subtraction 3:Multiplication 4:Transpose : ");
			scanf("%d",&ch);
			switch(ch)
			{
				case 1:
					printf("Addition");
					for(i=1;i<=n;i++)
						for(j=1;j<=m;j++)
						{
							c[i][j]=a[i][j]+b[i][j];
						}
					printf("\n");
					for(i=1;i<=n;i++)
					{	for(j=1;j<=m;j++)
						{
							printf("%d",c[i][j]);
							printf("\t");
						}
						printf("\n");
					}
					break;

				case 2:
					printf("Subtraction");
					for(i=1;i<=n;i++)
						for(j=1;j<=m;j++)
						{
							c[i][j]=a[i][j]-b[i][j];
						}
					printf("\n");
					for(i=1;i<=n;i++)
					{	for(j=1;j<=m;j++)
						{
							printf("%d",c[i][j]);
							printf("\t");
						}
						printf("\n");
					}
					break;

				case 3:
					printf("Multiplication");
					for(k=1;k<=n;k++)
					{	for(i=1;i<=m;i++)
						{
							sum=0;
							for(j=1;j<=m;j++)
							{
								sum=sum+a[k][j]*b[j][i];
							}
							c[k][i]=sum;
						}
					}
					printf("\n");
					for(i=1;i<=n;i++)
					{	for(j=1;j<=m;j++)
						{
							printf("%d",c[i][j]);
							printf("\t");
						}
						printf("\n");
					}
					 break;

				case 4:
					printf("Transpose");
					for(i=1;i<=n;i++)
					{	for(j=1;j<=m;j++)
						{
							c[i][j]=a[j][i];
						}
					}
					printf("\n");
					for(i=1;i<=n;i++)
					{	for(j=1;j<=m;j++)
						{
							printf("%d",c[i][j]);
							printf("\t");
						}
						printf("\n");
					}
					break;
			}
			printf("\nPress 1 : Yes\tPress 2 : No");
			printf("\n Do you want to continue : ");
			scanf("%d",&r);
		}while(r!=2);
		getch();
		return(0);
	}

/*
	OUTPUT
 Enter the rows of the first matrix : 2

 Enter the column of the first matrix : 2

 Enter the element a[1][1] : 1

 Enter the element a[1][2] : 3

 Enter the element a[2][1] : 4

 Enter the element a[2][2] : 7
1       3
4       7

 Enter the rows of the second matrix : 2

 Enter the column of the second matrix : 2

 Enter the element b[1][1] : 6

 Enter the element b[1][2] : 3

 Enter the element b[2][1] : 2

 Enter the element b[2][2] : 1
6       3
2       1

 1:Addition 2:Subtraction 3:Multiplication 4:Transpose : 1

Addition
7       6
6       8

Press 1 : Yes   Press 2 : No
 Do you want to continue : 1

 1:Addition 2:Subtraction 3:Multiplication 4:Transpose : 2

Subtraction
-5      0
2       6

Press 1 : Yes   Press 2 : No
 Do you want to continue : 1

 1:Addition 2:Subtraction 3:Multiplication 4:Transpose : 3

Multiplication
12      6
38      19

Press 1 : Yes   Press 2 : No
 Do you want to continue : 1

 1:Addition 2:Subtraction 3:Multiplication 4:Transpose : 4

Transpose
1       4
3       7

Press 1 : Yes   Press 2 : No
 Do you want to continue : 2


	*/



