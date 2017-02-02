#include<stdio.h>

int main()
{
	float i,j,k,a1,a2,b1,b2,c1,c2,coeffa1,coeffa2,coeffb1,coeffb2,coeffc1,coeffc2,linear1,x,y;

	printf("Enter coefficients of linear equation1 in the form a1,b1,c1\n");	scanf("%f%f%f",&a1,&b1,&c1);

        printf("Enter coefficients of linear equation1 in the form a1,b1,c1\n");	scanf("%f%f%f",&a2,&b2,&c2);

        
	coeffa1=a1*b2;
	coeffb1=b1*b2;
	coeffc1=c1*b2;

	coeffa2=a2*b1;
	coeffb2=b2*b1;
	coeffc2=c2*b1;

	//linear1=(coeffa1-coeffa2)+(coeffb1-coeffb2)-(coeffc1-coeffc2);
        x=(coeffc1-coeffc2)/(coeffa1-coeffa2);

        y=(c1-(x*a1))/b1;

        printf("x=%f y=%f",x,y);

        return 0;
}
