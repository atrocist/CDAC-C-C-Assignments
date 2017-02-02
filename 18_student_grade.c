#include<stdio.h>

int main()
{
	int i,j,k,marks;
	
	printf("Enter marks of student\n");
	scanf("%d",&marks);
	marks=marks/10;
	switch(marks)
	{
		case(10):
		case(9):
		case(8):
		case(7):
			printf("Grade is A\n");
		        break;	
		case (6):
			printf("Grade is B\n");
			break;
		case (5):
			printf("Grade C\n");
			break;
		case (4):
		case (3):
			printf("Grade D\n");
		        break;
		default :
				printf("Fail\n");
	}
}
