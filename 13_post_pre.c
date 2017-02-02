#include<stdio.h>

int main()
{
	int x=1,y=5,z=0;
	
	printf("\ninitially	 Z::\t%d X::\t%d Y::\t%d",z,x,y);
	z=++x&&++y;

	printf("\naftr ++x&&++y	 Z::\t%d X::\t%d Y::\t%d",z,x,y);
	z=--x&&--y;

	printf("\naftr --x&&--y	 Z::\t%d X::\t%d Y::\t%d",z,x,y);
	z=++x||++y;

	printf("\naftr ++x||++y	 Z::\t%d X::\t%d Y::\t%d",z,x,y);
	z=--x||--y;

	printf("\naftr --x||--y	 Z::\t%d X::\t%d Y::\t%d\n",z,x,y);
	return 0;

}	
