#include<stdio.h>
#include<conio.h>

int main()
{
	long int hh=0,mm=0,ss=0;
	long int secs=0;

	clrscr();
	printf("\nenter the time in hh mm ss\n");
	scanf("%ld%ld%ld",&hh,&mm,&ss);
	secs=(hh*3600)+(mm*60)+ss;
	printf("\ntime in seconds::%ld\n",secs);
	printf("\nenter the time in secs\n");
	scanf("%ld",&secs);
	hh=secs/3600;
	mm=(secs%3600)/60;
	ss=(secs%3600)%60;
	printf("\ntime in hhmmss is::%ld:%ld:%ld\n",hh,mm,ss);
	getch();
	return 0;

}