#include<stdio.h>
int dos(int, int);
int main()
{
	int i,j,k;
	i=20;
	j=30;
	k=dos(i,j);
	printf("\nDebug mode...");
	return 0;
}

int dos(int i, int j)
{
	int k;
	printf("\ndos");
	k=i/(j-30);
	return k;
}
