#include<stdio.h>

int main()
{
	int x=10,y=20,z=30;
	
 	const int l=100;
	int *p;

	const int *p1;
	int const *p2;
	int*const p3=&x;
	const int*const p4=&y;
	
	p1=&x;
//	*p1=20;//cant change value
	p1++;
//	(*p1)++;
	p1=&z;

	p2=&x;
//	*p2=20;//cant change val
	p2++;
//	(*p2)++;
	p2=&z;

//	p3=&x;//cant change addr
	*p3=20;//val can b changed
//	p3++;//cant change address
	(*p3)++;
//	p3=&z;//cant change addr

//	p4=&x;
//	*p4=20;
//	p4++;
//	(*p4)++;
//	p4=&z;
//cant change val or addr

	p=&l;
	printf("\nl::%d\n",l);
	*p=20;

	printf("\nl::%d\n",l);

	return 0;
}
