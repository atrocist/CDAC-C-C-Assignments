#include<stdio.h>
#include<string.h>

int main()
{
//	char tstr[5][20]={"abcd","efgh","sunday","monday","tuesday"};
	char *tstr[5]={"abcd","efgh","sunday","monday","tuesday"};
	*tstr[0]="aditya";
	char temp[20],*tptr;
	tptr=tstr[0];
	tstr[0]=tstr[1];
	tstr[1]=tptr;
	/*strcpy(temp,tstr[0]);
	strcpy(tstr[0],tstr[1]);
	strcpy(tstr[1],temp);
*/	
	printf("%s\n %s\n",tstr[0],tstr[1]);
	return 0;
}

