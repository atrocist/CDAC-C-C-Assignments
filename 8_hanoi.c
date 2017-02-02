#include<stdiio.h>

void(int, char*, char*, char*);

int main()
{
	int num;
	printf("\n Enter the number of disks : ");
	scanf("%d",&num);
	move(num,'A','B','C');
	return 0;
}


void move(int n, char *a, char*b, char*c)
{
	if(n==0)
	 	return;
	move(n-1,a,c,b);
	printf("disc:%d move from %c to %c\n",a,pa,pc);
	move(a-1,b,a,c);
	return;
}
