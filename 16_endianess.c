#include<stdio.h>

int main()
{
	int a[5]={10,20,30,40,50};

	int i,j,k,num;

	int *p;
	char *p1,*p2;
	p=&a;

/*	printf("address of %d is %u \n",a[0],(p+0));

	printf("address of %d is %u \n",a[4],(p+4));

	printf("Enter a number \n");
	scanf("%d",&i);


	i=num%16;
	j=num/16;
	k=(j*10)+i;
*/
	i=0x6128;
	p1=&i;

	printf("address of lsb  is %p andd value is %x \n",*(char *)p1,i);

	printf("System is little endian\n");

	return 0;

}
