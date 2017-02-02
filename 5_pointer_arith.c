#include<stdio.h>

int main()
{
	int a[5]={10,20,30,40,50};
	int *p;
	int *q;

	p=a;
	q=*(&a+1)-1;

	printf("Address of p is %u \n",p);
        printf("Address pf q is %d \n",q);

	printf("Arithmatic *p++ is %u \n",*p++);
        //printf("value of p is %d \n",*p);
	printf("Arithmatic *++p is %u \n",*++p);
       // printf("value of p is %d \n",*p);
	printf("Arithmatic (*p)++ is %u \n",(*p)++);
       //printf("value of p is %d \n",*p);
	printf("Arithmatic ++(*p) is %u \n",++(*p));
	
	printf("Arithmatic ++*p is %u \n",++*p);
	//printf("value of p is %d \n",*p);
	printf("Arithmatic *(p++) is %u \n",*(p++));
	//printf("value of p is %d \n",*p);
	printf("Arithmatic *(++p) is %u \n",*(++p));

	printf("Arithmatic *q-- is %u \n",*q--);

	printf("Arithmatic *--q is %u \n",*--q);
	
	printf("Arithmatic *(q)-- is %u \n",*(q)--);
	printf("value of p is %d \n",*q);
	printf("Arithmatic --(*q)) is %u \n",--(*q));
	
	printf("Arithmatic --*q is %u \n",--*q);

	printf("Arithmatic *(q--) is %u \n",*(q--));

	printf("Arithmatic *(--q) is %u \n",*(--q));
       printf("value of p is %d \n",*q); 
	return 0;
}
