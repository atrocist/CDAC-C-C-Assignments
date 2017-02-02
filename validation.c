
	
#include<stdio.h>

#define MAX 20
#define true 1
#define false 0

int top = -1; /*top pointer for stack*/
int stack[MAX]; /*stack*/

void push(char);/*function prototypes*/
char pop();

int main()
{
	char exp[20],temp;
	int i,size,valid=true;
	//size=sizeof(exp)/sizeof(char);

	printf("Enter an algebraic expression : ");
	scanf("%s",exp);

	size=sizeof(exp)/sizeof(char);
	for(i=0;i<size;i++)
	{
		if(exp[i]=='(' || exp[i]=='{' || exp[i]=='[')
			push( exp[i] );

		if(exp[i]==')' || exp[i]=='}' || exp[i]==']')
		{
			if(top == -1)
				valid=false;
			else
			{
				temp=pop();
				if( exp[i]==')' && (temp=='{' || temp=='[') )
					valid=false;
				if( exp[i]=='}' && (temp=='(' || temp=='[') )
					valid=false;
				if( exp[i]==']' && (temp=='(' || temp=='{') )
					valid=false;
			}
		}
	}

	if(top >= 0)
		valid=false;

	if( valid==true )
		printf("Valid expression…\n");
	else
		printf("Invalid expression…\n");
	return 0;
}

void push(char item)
{
	if(top == (MAX-1))
		printf("Stack Overflow\n");
	else
	{
		top=top+1;
		stack[top] = item;
	}
}

char pop()
{
	if(top == -1)
		printf("Stack Underflow\n");
	else
		return(stack[top--]);
	return 0;
} 
