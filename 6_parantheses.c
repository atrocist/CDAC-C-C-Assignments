#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define ABORT printf("\nInvalid Expression\n");\
	exit(1)

#define MAX 10

typedef struct stack
{
	int arr[MAX];
	int top;
}sstack;

typedef sstack* pstack;

void push(pstack,int);
int pop(pstack);
int isempty(pstack);
int isfull(pstack);

void main(){
	sstack s1;
	s1.top = -1;
	char str[20];
	char ch;

	printf("\nEnter the expression to be validated\n");
	gets(str);
	int len = strlen(str);
	int i;
	for(i=0;i<len;i++)
	{
		if(str[i] == '(' || str[i] == '{' || str[i] == '[')
			push(&s1,str[i]);
		if(str[i] == ')' || str[i] == '}' || str[i] == ']'){
			if(isempty(&s1)){	ABORT; }
			ch = pop(&s1);
			if(str[i] == ')' && ch != '('){	ABORT; }
			if(str[i] == '}' && ch != '{'){	ABORT; }
			if(str[i] == '[' && ch != ']'){	ABORT; }
		}
	}
	printf("\nExpression is Valid\n");

}

void push(pstack ps,int val)
{
	if(isfull(ps))
	{
		printf("stack is full:");
		exit(0);
	}
	ps->top++;
	ps->arr[ps->top]=val;
}

int pop(pstack ps)
{
	if(isempty(ps))
	{
		printf("stack is empty:");
		exit(0);
	}
	return ps->arr[ps->top--];
}

int isfull(pstack ps)
{
	return ps->top==(MAX-1);
}

int isempty(pstack ps)
{
	return ps->top==-1;
}
