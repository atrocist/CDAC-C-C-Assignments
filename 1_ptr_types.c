#include<stdio.h>

int main()
{
	int *p1,*p12,*p13,*p14;
	char *p2;
	float *p3;
	double *p4;

	int i=10;
	char j='a';
	float k=10.0;
	double l=10.0;
	
	p1=&i;
	p2=&j;
	p3=&k;
	p4=&l;
	

	printf("\ninteger::\np1+1::%u\n(*p1)+1::%d\n*(p1+1)::%d\n&i::%u\ni+1::%d\n",(p1+1),((*p1)+1),*(p1+1),&i,(++i));

	printf("\nchar::\np2+1::%u\(*p2)+1::%c\n*(p2+1)::%c\n&j::%u\nj+1::%c\n",(p2+1),((*p2)+1),*(p2+1),&j,(++j));

	printf("\nfloat::\np3+1::%u\n(*p3)+1::%f\n*(p3+1)::%f\n&k::%u\nk+1::%f\n",(p3+1),((*p3)+1),*(p3+1),&k,(++k));

	printf("\ndouble::\np3+1::%u\n(*p3)+1::%ld\n*(p3+1)::%ld\n&l::%u\nl+1::%ld\n",(p4+1),((*p4)+1),*(p4+1),&l,(++l));
	
	return 0;
}
