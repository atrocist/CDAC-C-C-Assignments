#include<stdio.h>
#include<conio.h>
#include<limits.h>
int main()
{
	clrscr();
	printf("\nsize of int is::\t%d\n",sizeof(int));
	printf("\nsize of float is::\t%d\n",sizeof(float));
	printf("\nsize of double is::\t%d\n",sizeof(double));
	printf("\nsize of char is::\t%d\n",sizeof(char));
	printf("\nsize of long double is::%d\n",sizeof(long double));
	printf("\nsize of short is::\t%d\n",sizeof(short));

	printf("\nmax of int is::%d\n min of int is::%d\n",INT_MAX,INT_MIN);
	printf("\nmax of char is::%d\n min of char is::%d\n",CHAR_MAX,CHAR_MIN);
	printf("\nmax of unsigned int is::%u\n min of unsigned int is::%u\n",UINT_MAX,0);
	printf("\nmax of short int is::%d\n min of short int is::%d\n",SHRT_MAX,SHRT_MIN);
	printf("\nmax of long int is::\t%ld min of long int is::\t%ld\n",LONG_MAX,LONG_MIN);
	getch();
	return 0;

}