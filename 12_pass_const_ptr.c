#include<stdio.h>


//int  test(int *);
//int  test1(const int *);

int main()
{
 //int x=20,y=10,r=30;
 int p;  
 const int *q=&p;

 p=5;

 *q=100;



 return 0;
}
 p=&x;
 q=&y;
 printf("initial value of p is %d",*p);
 r = test(p);
  
 printf("value is %d",r);
 test1(p);

 printf("value of *q is %d \n",p);
 printf("value of p is %d \n",p);
 
 q=&x;
 
 test1(q);
 printf("value of q is %d \n",*q);
 return 0;

}

int  test(int *p) 
{
p=p+2;
return (p);
}

int  test1(const int *q)
{
 q=q+5;
 return(q);
}



	
