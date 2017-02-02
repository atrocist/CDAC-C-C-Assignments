#include<stdio.h>

register int gl asm("ebx");
void main(){
	register int lc = 2;
	printf("\n&gl = %X, &lc = %d\n",&gl,&lc);
}	

