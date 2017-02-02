#include<stdio.h>

int main()
{
	int a[5]={10,20,30,40,50};

	int *p;
	int (*parr)[5];
//	int *parr1[5];
	p=a;
	printf("\np::%u\t*p::%d\t*(p+1)::%d\ta[0]::%d\t0[a]::%d\n",p,*p,*(p+1),a[0],0[a]);
	parr=&a;
//	parr1=&a;
	printf("\nsizeof(parr)::%d\tsizeof(*parr)::%d\tsizeof(**parr)::%d\t",sizeof(parr),sizeof(*parr),sizeof(**parr));
//	printf("\nsizeof(parr1)::%d\tsizeof(*parr1)::%d\tsizeof(**parr1)::%d\t",sizeof(parr1),sizeof(*parr1),sizeof(**parr1));
	return 0;
}
