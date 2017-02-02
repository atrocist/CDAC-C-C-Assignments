#include<stdio.h>
#include<conio.h>
#define MAX 6

typedef struct stack
{
	int data;
	struct stack *next;
}stack;

void initialise(stack **);
int empty(stack *);
void push(stack **,int);
int pop(stack **);
void print(stack *);

void main()
{
	stack *top;
	int x,op;
	initialise(&top);
	clrscr();
	do
	{
		printf("\nPress 1 : To push\nPress 2 : To pop\nPress 3 : To print\nPress 4 : To exit");
		printf("\nEnter proper choice : ");
		scanf("%d",&op);
		switch(op)
		{
			case 1: printf("Enter the element to be pushed : ");
				scanf("%d",&x);
				push(&top,x);
				break;
			case 2: if(!empty(top))
				{
					x=pop(&top);
					printf("The element popped is %d",x);
				}
				else
					printf("The stack is empty.");
				break;
			case 3: print(top);
				break;
		}
	}while(op!=4);
	getch();
}

void initialise(stack **top)
{
	*top=NULL;
}

int empty(stack *top)
{
	if(top==NULL)
		return 1;
	return 0;
}

void push(stack **top,int x)
{
	stack *p;
	p=(stack*)malloc(sizeof(stack));
	p->data=x;
	p->next=*top;
	*top=p;
}

int pop(stack **top)
{
	int x;
	stack *p;
	p=*top;
	*top=p->next;
	x=p->data;
	free(p);
	return x;
}

void print(stack *top)
{
	while(top!=NULL)
	{
		printf("\n\t%d",top->data);
		top=top->next;
	}
}
