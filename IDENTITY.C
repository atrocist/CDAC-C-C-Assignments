#include<stdio.h>

int main()
{
int mat[5][5],order,i,j,flag=0;

printf("\n Enter a square matrix to check identity");
printf("\n\n Enter its order : ");
scanf("%d",&order);

for(i=0;i<order;i++)
{
	printf("\n");
	for(j=0;j<order;j++)
	{
		printf(" (%d %d) : ",i+1,j+1);
		scanf("%d",&mat[i][j]);
	}
}

for(i=0;i<order;i++)
{
	for(j=0;j<order;j++)
	{
		if(i==j)
		{
			if(mat[i][j]!=1)
			{
				flag=1;
				break;
			}
		}
		else
		{
			if(mat[i][j]!=0)
			{
				flag=1;
				break;
			}
		}
	}
}

printf("\n The given matrix is ");
if(flag==0)
printf("an identity matrix.");
else
printf("not an identity matrix.");

return 0;
}
