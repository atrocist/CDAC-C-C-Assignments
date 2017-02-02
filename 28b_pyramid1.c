#include<stdio.h>
int main()

{ 
	int row, c, n, temp;

	printf("Enter the number of rows in pyramid");

	scanf("%d",&n);
	temp = n;

	for ( row = 1 ; row <= n ; row++ )
	 {
                 for ( c = 1 ; c <=n-row  ; c++ )		
			 printf(" ");
		 for ( c = 1 ; c <= row ; c++ )
			 printf("* ");
	        	 printf("\n");
	 }
			 return 0;
         
}


