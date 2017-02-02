#include<stdio.h>
#include<string.h>

int main()
{
	int i,j,k,l;
	char str[10];

	printf("Enter a string\n");
	gets(str);

	l=strlen(str);

        if(l%2==0)
	{	
		for(i=0,j=l-1;i<l/2;i++,j--)
			if(str[i]!=str[j])
			{
		             printf("String is not a palindrome\n");
			     break;
			} 
		printf("String is a palindrome\n");
	}
	else
	{	
		for(i=0,j=l-1;i<(l+1)/2;i++,j--)
			if(str[i]!=str[j])
			{
		             printf("String is not a palindrome\n");
			     break;
			} 
		printf("String is a palindrome\n");
	}



	return 0;
}
