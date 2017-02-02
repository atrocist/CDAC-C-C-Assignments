#include<stdio.h>

int main()
{
	char i;
	printf("Enter a character\n");
	scanf("%c",&i);
	if(i=='a' || i=='e' || i=='i' || i=='o' || i=='u')
		printf("Character is a vowel\n");
	else
		printf("Character is a consonant\n");
	return 0;
}
