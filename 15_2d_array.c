#include<stdio.h>

int main()
{
	int arr[3][4],i=2,j=1;
	arr[2][1]=10;
	int (*p)[4];
	p=arr;

	printf("sizeof(p) is %d \n",sizeof(p));
	printf("sizeof(*p) is %d \n",sizeof(*(p+0)));
	//printf("sizeof(*p) is %d \n",sizeof(*p));
	printf("arr[i][j] is %d\n",arr[i][j]);

        printf("arr*(p+i)[j] is %u\n",(*(p+i))[j]);
	printf("*(*(p+i)+j) is %u\n",*(*(p+i)+j));



	return 0;


}
