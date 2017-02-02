#include<stdio.h>
#include<assert.h>
int main()
{
	int x=11,y=0;
	int *px;
	int *p1=NULL;
	px=&x;
//	y=*p1+1;

	assert(p1==NULL);	
	printf("\nassert(p1==NULL)\n");
	assert(p1!=NULL);
	return 0;

}
