#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void push(int);
int pop(void);
int isempty();
int isfull();

int top=0,arr[10];

int main()
{
	char ch[]="-+/72*548";
	int len,n,n1,n2,n3,i;
	len=strlen(ch);
	for(i=len;i>=0;i--)
	{
		if((ch[i])>=48 && (ch[i])<=57)
			push(ch[i]-'0');
		else
		{
			switch(ch[i])
			{
				case '+':
					n1=pop();
					n2=pop();
					n3=n1+n2;
					push(n3);
					break;

				case '*':
					n1=pop();
					n2=pop();
					n3=n1*n2;
					push(n3);
					break;

				case '-':
					n1=pop();
					n2=pop();
					n3=n1-n2;
					push(n3);
					break;

				case '/':
					n1=pop();
					n2=pop();
					if(n2!=0)
					{
						n3=n1/n2;
						push(n3);
					}
					else
						exit(1);

					break;
			}
		}
	}	
	n=pop();
	printf("\nFinal Result is: %d\n",n);
	
	return 0;
}

	
void push(int n)
{
	if(!(isfull()))
	{
		top++;
		arr[top]=n;
	}
	return;
}

int pop()
{
	int n;
	if(!(isempty()))
	{
		n=arr[top];
		top--;
	}
	return n;
}

int isempty()
{
	if(top==-1)
		return 1;
	else
		return 0;
}

int isfull()
{
	if(top==10)
		return 1;
	else
		return 0;
}
