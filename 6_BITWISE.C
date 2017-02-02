#include<stdio.h>

int main(void)
{
	int num=0,k=0,op=0;

	system("clear");

	printf("\nenter a number\n");
	scanf("%d",&num);
	printf("\nthe number in hex is::\t %x\n",num);
	printf("\nenter the bit to be manupulated\n");
	scanf("%d",&k);
	op=num|(1<<k);
	printf("\nthe number after settin kth bit::\t %x\n",op);
	op=num&(~(1<<k));
	printf("\nthe number after resettin kth bit::\t %x\n",op);
	op=num^(1<<k);
	printf("\nthe number after toggling kth bit::\t %x\n",op);
	op=num&(1<<k);
	if(op==0)
		 printf("\nthe bit no %d is 0\n",k);
	else
		 printf("\nthe bit no %d is 1\n",k);

	return 0;
}
