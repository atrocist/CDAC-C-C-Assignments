#include<stdio.h>

typedef struct stack
{
	int top;
	char arr[50];
}stk;
char pop(stk*);
int prec(char);
int isoperand(char);

void convert(char a[50],stk *sp);
int isempty(stk *sp);
void push(char a,stk *sp);
int main()
{
	stk s1;
	stk *sp;

	sp=&s1;
	sp->top=-1;
	printf("Enter infix expression : \n");
	char a[50];
	scanf("%s",a);
	convert(a,sp);
	return 0;
}


int isempty(stk *sp)
{
	if(sp->top==-1)
		return 1;
	return 0;
}

void convert(char a[50],stk *sp)
{
	char post[50];
	int i=0,j=0;
	while(a[i]!='\0')
	{
		if(isoperand(a[i]))
		
			post[j++]=a[i++];
			
		else 
		{   if (a[i]=='{')
				push(a[i],sp);
			else if (a[i]=='}')
			{
				while((post[j++]=pop(sp))!='{');
                        j--;
			}
			else
			
			{
				if(isempty(sp))
					push(a[i],sp);
				else
				{
					while(prec(sp->arr[sp->top])>=prec(a[i]))
					{
						post[j++]=pop(sp);
					}
					push(a[i],sp);
				}

			
			}
            i++;
		}	
	}
	while(!isempty(sp))
		post[j++]=pop(sp);
	post[j]='\0';
	printf("\n%s\n",post);
}


void push(char a,stk *sp)
{
	sp->top++;
	sp->arr[sp->top]=a;
}

char pop(stk *sp)
{
	char i;
	i=sp->arr[sp->top];
	sp->top--;
	return i;
}


int isoperand(char a)
{
	if((a>=65&&a<=90) ||(a>=97&&a<=122))
		return 1;
	return 0;
}


int prec(char a)
{

	switch (a)
	{
		case '*':
		case '/':return 2;
		case '^':return 3;
		case'+':
		case'-':return 1;
	        case'{':return 0;
	}
}
