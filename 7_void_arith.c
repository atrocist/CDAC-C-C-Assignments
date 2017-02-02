#include<stdio.h>

int main()
{
	int i,j;
	void *pv1,*pv2;

	pv1=&i;
	pv2=&j;
	printf("address pf pv1=%u\n",pv1);

	printf("address pf pv2=%u\n",pv2);
	//printf("Addition of void pointers is %u\n",pv1+pv2);

	printf("Subtraction of void pointers is %u\n",pv1-pv2);
        
       	printf("subtraction by constant is %u\n",pv1-5);
	
	return 0;
}
