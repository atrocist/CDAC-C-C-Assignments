#include<stdio.h>

union A
{
    int x;
    int y;
    char ch[2];
};
union A a1;

int main()
{
	a1.x=0x41;  
	a1.y=0x3130; 
	printf("%d,%c,%c",a1.x,a1.ch[0],a1.ch[1]);
	return 0;
}

