#include<stdio.h>

int sum(int,int);
int difference(int,int);
int main()
{
	int (*fptr1[2])(int,int);
        int a,b,choice;

	printf("Enter first number \n");
	scanf("%d",&a);

        printf("Enter first number \n");
	scanf("%d",&b);
       
	/*printf("Enter choice of operation\n press 1 for addition \n press 2 for subtraction \n");
	scanf("%d",&choice);*/
        
	fptr1[1]=sum(a,b);
        printf("Addition of %d and %d is %d \n",a,b,*(fptr1+1));

        fptr1[2]=difference(a,b);
        printf("Difference of %d and %d is %d \n",a,b,*(fptr1+2));

	return 0;


}

int sum(int a,int b)
{
	int res;
	res=a+b;
	return res;
}

int difference(int a,int b)
{
	int diff;
	diff=a-b;
	return diff;
}
