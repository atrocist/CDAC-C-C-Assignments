#include<stdio.h>

int main()

{

	  int x,y;

	  printf("Enter the values for coordinates x and y\n");

	   scanf("%d%d",&x,&y);

	    if((x>0) &&(y>0))

		      {

			         printf("\n The co-ordinate (%d,%d) is in first Quardrant\n",x,y);

		      }

	      else if((x<0) &&(y<0))

		         {

				    printf("\n The co-ordinate (%d,%d) is in Third Quardrant\n",x,y);

		        }

	        else if((x>0) &&(y<0))

			   {

				      printf("\n The co-ordinate (%d,%d) is in Fourth Quardrant\n",x,y);

		           }
                  else if(x==0 && y==0)
		           printf("Origin\n");


		   else

			      printf("\n The co-ordinate (%d,%d) is in Second Quardrant\n",x,y);

		     return 0;

 }
