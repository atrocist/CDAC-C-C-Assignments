#include<stdio.h>
#include<conio.h>
#define MAX 6

typedef struct
{
	int data[MAX];
	int top;
}stack;

void init(stack *);
int empty(stack *);
int full(stack *);
void push(stack *,int);
int pop(stack *);
void print(stack *);
void evaluate(char []);

void main()
{
	char postfix[30];
	clrscr();
	printf("\nEnter postfix expression : ");
	gets(postfix);
	evaluate(postfix);
	getch();
}

void evaluate(char postfix[])
{
	int op1,op2,i,val=0;
	stack s;
	init(&s);
	for(i=0;postfix[i]!='\0';i++)
	{
		if(isalpha(postfix[i]))
		{
			printf("\nEnter the value of %c : ",postfix[i]);
			scanf("%d",&val);
			push(&s,val);
		}
		else
		{
			op2=pop(&s);
			op1=pop(&s);
			switch(postfix[i])
			{
				case '+': push(&s,op1+op2);
					  break;
				case '-': push(&s,op1-op2);
					  break;
				case '*': push(&s,op1*op2);
					  break;
				case '/': push(&s,op1/op2);
					  break;
				case '%': push(&s,op1%op2);
					  break;
			}
		}
	}
	val=pop(&s);
	printf("\nThe value of the postfix expression is %d",val);
	getch();
}

void init(stack *s)
{
	s->top=-1;
}

int empty(stack *s)
{
	if(s->top==-1)
		return 1;
	return 0;
}

int full(stack *s)
{
	if(s->top==MAX-1)
		return 1;
	return 0;
}

void push(stack *s,int x)
{
	s->top=s->top+1;
	s->data[s->top]=x;
}

int pop(stack *s)
{
	int x;
	x=s->data[s->top];
	s->top=s->top-1;
	return x;
}

void print(stack *s)
{
	int i;
	for(i=s->top;i>=0;i--)
		printf("\n\t%d",s->data[i]);
}
