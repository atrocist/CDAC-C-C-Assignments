#include<stdio.h>
#include<conio.h>
#define MAX 6

typedef struct
{
	int data[MAX];
	int top;
}stack;

void initialise(stack *);
int empty(stack *);
int full(stack *);
void push(stack *,int);
int pop(stack *);
void print(stack *);

void main()
{
	stack s;
	int x,op;
	initialise(&s);
	clrscr();
	do
	{
		printf("\nPress 1 : To push\nPress 2 : To pop\nPress 3 : To print\nPress 4 : To exit");
		printf("\nEnter proper choice : ");
		scanf("%d",&op);
		switch(op)
		{
			case 1: if(!full(&s))
				{
					printf("Enter the element to be pushed : ");
					scanf("%d",&x);
					push(&s,x);
				}
				else
					printf("Stack overflow...");
				break;
			case 2: if(!empty(&s))
				{
					x=pop(&s);
					printf("The element popped is %d",x);
				}
				else
					printf("The stack is empty.");
				break;
			case 3: print(&s);
				break;
		}
	}while(op!=4);
	getch();
}

void initialise(stack *s)
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

/*
OUTPUT

Press 1 : To push
Press 2 : To pop
Press 3 : To print
Press 4 : To exit
Enter proper choice : 1
Enter the element to be pushed : 15

Press 1 : To push
Press 2 : To pop
Press 3 : To print
Press 4 : To exit
Enter proper choice : 1
Enter the element to be pushed : 45

Press 1 : To push
Press 2 : To pop
Press 3 : To print
Press 4 : To exit
Enter proper choice : 1
Enter the element to be pushed : 88

Press 1 : To push
Press 2 : To pop
Press 3 : To print
Press 4 : To exit
Enter proper choice : 3

	88
	45
	15

Press 1 : To push
Press 2 : To pop
Press 3 : To print
Press 4 : To exit
Enter proper choice : 2

Press 1 : To push
Press 2 : To pop
Press 3 : To print
Press 4 : To exit
Enter proper choice : 3

	45
	15

Press 1 : To push
Press 2 : To pop
Press 3 : To print
Press 4 : To exit
Enter proper choice : 2

Press 1 : To push
Press 2 : To pop
Press 3 : To print
Press 4 : To exit
Enter proper choice : 3

	15

Press 1 : To push
Press 2 : To pop
Press 3 : To print
Press 4 : To exit
Enter proper choice : 1
Enter the element to be pushed : 13

Press 1 : To push
Press 2 : To pop
Press 3 : To print
Press 4 : To exit
Enter proper choice : 3

	13
	15

Press 1 : To push
Press 2 : To pop
Press 3 : To print
Press 4 : To exit
Enter proper choice : 4
*/
