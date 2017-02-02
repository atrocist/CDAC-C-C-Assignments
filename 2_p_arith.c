#include<stdio.h>
int main()
{
 	int x=10;
 	int  *p,*p1,*p2;
 	p=&x;
        p1=p+5;
	printf("Address of x is %u",p);
        printf("Arithmatic p1=p+5 for integer is %u\n",p1);

        p2=p-5;
        printf("Arithmatic p2=p-5 for integer is %u\n",p2);

        p1++;
	printf("Arithmatic p1++ is %u\n",p1);

	p2--;
        printf("Arithmatic p2-- is %u\n",p2);
     
       // p1-p2;	
     	printf("Arithmatic p1-p2 for integer is %u\n",p1-p2);
      
	double a=12;
	double *f,*f1,*f2;

        f=&a;	
        f1=f+5;
	printf("Address of x is %u",f);
        printf("Arithmatic p1=p+5 for integer is %u\n",f1);

        f2=f-5;
        printf("Arithmatic p2=p-5 for integer is %u\n",f2);

        f1++;
	printf("Arithmatic p1++ is %u\n",f1);

	f2--;
        printf("Arithmatic p2-- is %u\n",f2);
     
       // p1-p2;	
     	printf("Arithmatic p1-p2 for integer is %u\n",f1-f2);


        return 0;

}

