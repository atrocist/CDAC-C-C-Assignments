#include<stdio.h>
int main()
{
	int i,j,num,num1,flag=0;
	//printf("Enter a number \n");
	//scanf("%d",&num);

/*	for(num=2;num<10;num++)
	{
	  if(flag!=0)
		  printf("%d is prime\n",num-1);

		num1=num/2;
		for(i=num1;i>1;i--)
		{
			if((num%num1)!=0)
                        flag++;
			else
				flag=0;
                       
		}
	}*/
	
	for(num=10;num>1;num--)
	{
	flag=0;
        for(i=num-1;i>1;i--)
	{	if(num%i==0)
		{	
			flag=1;
			break;
		}
	}
	if(flag==1)
		printf("\n%d is not prime\n",num);
	else
		printf("\n%d is prime\n",num);
	}
	return 0;
}
