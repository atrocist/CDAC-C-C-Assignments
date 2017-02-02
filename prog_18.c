#include<stdio.h>
#include<stddef.h>
union A
{
	int x;
	double y;
	char ch;
};
  union A a1;


int main()
{
	printf("Sizeof union A is %d \n",sizeof(a1));
	printf("offset of x is %d \n",offsetof(union A ,x));
	printf("offset of y is %d \n",offsetof(union A,y));
	printf("offset of ch is %d \n",offsetof(union A,ch));
	//printf("offset of x is %d \n",a1,x);

	return 0;
}
