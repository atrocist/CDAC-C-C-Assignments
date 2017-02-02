// PROGRAM TO CHECK FOR NESTED CALL OF STANDARD LIBRARY FUNCTIONS

#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int main()
{
	double x=5.0;
	char ch='a';

	printf("%lf\n",sqrt(pow(abs(x),2)));
	putchar(toupper(ch));
	printf("\n");

	return 0;
}

