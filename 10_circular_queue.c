#include<stdio.h>
#include<stdlib.h>

void add(int);
int remov();
int isempty();
int isfull();
void display();

int front=0,rear=-1,arr[10],k=0;

int main()
{
	int ch,num;
	char choice;
	system("clear");
	do
	{
		system("clear");
		printf("...MAIN MENU...");
		printf("\n1.Add in Element in Queue");
		printf("\n2.Remove an Element from Queue");
		printf("\n3.Display Queue");
		printf("\n4.Exit");
		printf("\nEnter your choice: \n");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1:
				printf("\nEnter the number to be added: ");
				scanf("%d",&num);
				add(num);
				display();
				break;

			case 2:
				printf("\nThe number removed is: ");
				num=remov();
				printf("%d",num);
				if(k==0)
					printf("\nQueue is Empty\n");
				display();
				break;
			case 3:
				display();
				break;

			case 4:
				exit(1);

			default:
				printf("\n WRONG CHOICE ");
				goto label;
		}
		__fpurge(stdin);
		label:		printf("\nDo you want to Continue (y or Y): ");
		scanf("%c",&choice);
	}while(choice=='y' || choice=='Y');
	
	return 0;
}

void add(int n)
{
	if(!(isfull()))
	{
		if(rear==9 && front>0)
		{
			rear=(rear+1)%10;
			arr[rear]=n;
			k++;
		}
		else
		{
			rear++;
			arr[rear]=n;
			k++;
		}
	}
	if(k==10)
		printf("\nQueue is Full\n");
	return;
}

int remov()
{
	int n;
	if(!(isempty()))
	{
		n=arr[front];
		if(front==9 && rear>0)
		{
			front=(front+1)%10;
			k--;
		}
		else
		{
			front++;
			k--;
		}
	}
	return n;
}

void display()
{
	int i;
	printf("\n");
	printf("Queue is: ");
	if(front<rear)
	{
		for(i=front;i<=rear;i++)
			printf("%d ",arr[i]);
		return;
	}
	if(front==rear)
	{
		printf("%d ",arr[rear]);
	}
	else if(k)
	{
		for(i=front;i<10;i++)
			printf("%d ",arr[i]);
		for(i=0;i<=rear;i++)
			printf("%d ",arr[i]);
	}
}

int isempty()
{
	if(k==0)
	{
		printf("Queue is Empty\n");
		return 1;
	}
	else
		return 0;
}

int isfull()
{
	if(k==10)
	{
		printf("Queue is full\n");
		return 1;
	}
	else
		return 0;
}
