#include<stdio.h>

int main()
{
	int i=2,j=2,k;

	int b[3][5]={1,2,3,4,5,6,7,8,9,1,2,3,4,5,6};

	int *p;
	p=b;
        printf("Address of p is %u \n",p);
	printf("Arithmatic p+1 is %u \n",p+5);

	printf("Arithmatic p+2 is %u \n",p+2);
	printf("Arithmatic *p+j is %u \n",*p+j);
	//printf("Arithmatic p+1 is %u \n",*(*p+j));
        return 0;
}
