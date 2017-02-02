#include<stdio.h>
#include<limits.h>
#include<stdlib.h>
#include<string.h>
#define MAX 50

int is_empty(int *top);
int is_full(int *top);
int push(char data,int *top,char stack[MAX]);
char pop(int *top,char stack[MAX]);
void display(int *top,char stack[MAX]);
int prio(char opratr);

int main()
{
	char stack[MAX]={0};
	int dummy=0;
	int data=0;
	int top=-1;
	int i,j,new=0,old=0;
	char infix[MAX]={"0"};
	char prefix[MAX]={"0"};
	char temp;
	int len;
	push('$',&top,stack);
	printf("\nenter the infix expression\n");
	__fpurge(stdin);
	scanf("%[^\ns]",infix);
	len=strlen(infix);
	for(i=0,j=len-1;i<=len/2;i++,j--)
	{
		temp=infix[i];
		infix[i]=infix[j];
		infix[j]=temp;
	}

	for(i=0,j=0;infix[i]!='\0';i++)
	{
	
		if(prio(infix[i])==INT_MIN)
		{
			prefix[j]=infix[i];
			j++;		
		}
		else
		{
			new=prio(infix[i]);
			old=prio(stack[top]);
			if(new<old)
			{		
					if(infix[i]==')')
						push(infix[i],&top,stack);
					else
					{
						while(new<old)
						{
							prefix[j]=pop(&top,stack);
							j++;
							old=prio(stack[top]);
							if(old==0)
								break;
						}
						push(infix[i],&top,stack);
					}
			}
			else
			{				
				if(infix[i]=='(')
				{
					temp=pop(&top,stack);
					while(temp!=')')
					{							
						prefix[j]=temp;
						j++;
						temp=pop(&top,stack);
					}
				}
				else
					push(infix[i],&top,stack);
			}

		}
	}
	while(stack[top]!='$')
	{
		prefix[j]=pop(&top,stack);
		j++;
	}
	pop(&top,stack);
	prefix[j]='\0';
	len=strlen(prefix);
	for(i=0,j=len-1;i<=len/2;i++,j--)
	{
		temp=prefix[i];
		prefix[i]=prefix[j];
		prefix[j]=temp;
	}
	puts(prefix);

	return 0;
}

int prio(char opratr)
{
	switch(opratr)
	{
		case '(':
				return 4;
		case '^':
				return 3;
		case '*':			
		case '/':
				return 2;
		case '+':
		case '-':
				return 1;
		case ')': 
				return 0;
		default:
				return INT_MIN;
	}
}
int push(char data,int *top,char stack[MAX])
{
	if(!(is_full(top)))
	{
		(*top)++;
		stack[*top]=data;
		return 0;
	}
	printf("\npushing in full stack not allowed\n");
	return CHAR_MIN;
}

char pop(int *top,char stack[MAX])
{
	char data='0';
	if(!(is_empty(top)))
	{
		data=stack[*top];
		(*top)--;
		return data;
	}
	printf("\npopping from empty stack not allowed\n");
	return CHAR_MIN;
}

int is_full(int *top)
{
	if(*top==MAX-1)
		return 1;
	return 0;
}

int is_empty(int *top)
{
	if(*top==-1)
		return 1;
	return 0;
}

void display(int *top,char stack[MAX])
{
	int i=0;
	if(!(is_empty(top)))
		for(i=*top;i>-1;i--)
			printf("%c",stack[i]);
	else
		printf("\nstack is empty\n");

}
