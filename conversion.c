#include<stdio.h>

int main()
{
	int i,j,k,l,num,a[20],num1,m;

	printf("Enter a number\n");
	scanf("%d",&num);

       i=num%8;
       j=num/8;

       k=(j*10)+i;

       printf("Octal equivalent of %d is %d\n",num,k);

       i=num%16;
       j=num/16;

       k=(j*10)+i;

       printf("Hexadecimal equivalent of %d is %d\n",num,k);
       l=0;
       do
       {
	       num1=num/2;
	       a[l]=num%2;
	       l++;
       }while(a[l-1]<2);
       
       printf("Binary\n");
       for(m=0;m<=l;m++)
       {
	       printf("%d",a[m]);
       }
       

       return 0;
}
