#include<stdio.h>

int main()
{
	int i,j;
	i=0x6D46;
	j=i |(1<<15);
        printf("\nvalue of i in binary is %x\nvalue of j in binary %x",i,j);
	return 0;
}
