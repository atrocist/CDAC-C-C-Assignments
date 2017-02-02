#include<stdio.h>
#define PINT int*

typedef int* pint;
int main()
{
	PINT p1,*p2;
       

	pint p3,p4;

        printf("sizeofp1 and p2 is %d \n",sizeof(p1));

         printf("sizeofp3 and p4 is %d \n",sizeof(p3));
        
	 return 0;
}
