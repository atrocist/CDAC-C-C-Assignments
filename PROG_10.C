#include<stdio.h>



typedef struct student
{
	int rollno;
	char name[30];
	int marks;
}S;

void disp(S *);

int main()
{
	int i,j,k;
	S s1,s2,s3;
	S *spt;
	//s1={10,"John",45};
	
	printf("Enter roll.no of student \n");
	scanf("%d",&s2.rollno);

	flushall();
	printf("Enter name of student \n");
	scanf("%[^\n]s",&s2.name);

	printf("Enter marks of student \n");
	scanf("%d",&s2.marks);

	printf("Entered data is \n");
	disp(&s2);

	printf("Size of element roll.no id %d \n",sizeof(s2.rollno));
	printf("Size of element name is %d \n",sizeof(s2.name));
	printf("Size of element marks is %d \n",sizeof(s2.marks));

	return 0;
}

void disp(S *a)
{
	printf("Roll.no of student id %d \n ",a->rollno);
	printf("Name of student is %s \n ",a->name);
	printf("Marks of student id %d \n ",a->marks);
}