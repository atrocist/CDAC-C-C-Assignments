#include<stdio.h>

int main()
{
	int i,j,result,det[4];
	printf("Enter elements in determinant\n");
	for(i=0;i<4;i++)
	scanf("%d",&det[i]);

        result=(det[1]*det[2])-(det[0]*det[3]);

	if(result<0)
		printf("Determinant is %d\n",result*(-1));
	else
		printf("Determinant is %d\n",result);
	return 0;

}
