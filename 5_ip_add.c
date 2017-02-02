#include<stdio.h>
#include<string.h>
#include<math.h>

unsigned int ascii_int(char str[],unsigned int j,unsigned int k);
int main()
{
	unsigned int i,j=0,k,ans=0,intgr,temp=0;
	char str[20];
	char str2[20];
	unsigned int mask=0xff000000;
	unsigned int no[20]={0};
	k=0;
	printf("\n Enter the IP address\t");
	gets(str);
	for(i=0;i<4;i++)
	{
		k=0;
		while(str[j]!='.' && str[j]!='\0')
		{
			j++;
			k++;
			
		}		
		intgr=ascii_int(str,j,k);
		temp=ans<<8;
		ans=temp|intgr;
		j++;
	}
	printf("\nthe ip address in hex is\t%x\n\n",ans);
	
	for(i=1,j=3;i<=4;i++,j--)
	{
		no[i-1]=ans & mask;
		no[i-1]=(no[i-1]>>(8*j));
		mask=mask>>8;		
		printf("%d.",no[i-1]);
	}
	return 0;
}

unsigned int ascii_int(char str[],unsigned int j,unsigned int k)
{
	int m,num=0;
	m=j-k;
	switch(k)
	{
		case 3:
			num=(str[m]-48)*100+(str[m+1]-48)*10+(str[m+2]-48);	
		
			break;
		case 2:
			num=(str[m]-48)*10+(str[m+1]-48);	

			break;
		case 1:
			num=(str[m]-48);	
	}
	return num;
}
