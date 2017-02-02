#include<stdio.h>

int main()
{
	int i,j,result,det[10];
	printf("Enter elements in determinant\n");
	for(i=1;i<10;i++)
	scanf("%d",&det[i]);

        result=(det[1]*((det[5]*det[9])-(det[6]*det[8])))
		-(det[2]*((det[4]*det[9])-(det[6]*det[7])))
		+(det[3]*((det[4]*det[8])-(det[5]*det[7])));

	if(result<0)
		printf("Determinant is %d\n",result*(-1));
	else if(result>0)
		printf("Determinant is %d\n",result);
	else
               	printf("Determinant is %d\n",result);
        return 0;

}
