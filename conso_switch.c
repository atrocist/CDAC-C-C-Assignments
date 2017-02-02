#include<stdio.h>

int main()
{

	char a;
	
	printf("Enter any character:\n");
	scanf("%c",&a);

	switch(a)
	{
		case 'a' :
		case 'e' :
		case 'i' :
		case 'o' :
		case 'u' :
			printf("character is a vowel\n ");
			break;
			default:  printf("character is consonent");			


	}

	

return 0;	

}

