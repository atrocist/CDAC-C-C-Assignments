#include<stdio.h>
int sum(int a[]);
int sum_2d(int a1[][3]);
int minmax(int a[]);
int minmax2(int a1[][3]);

int main()
{
	int i,j,sum1=0,l,m,sum2;
	int a[5],b[5],res[5],a1[3][3],b1[3][3];
        int *p,*q;
	p=a1;

  /*     	printf("Enter 5 elements in a array\n");
	for(l=0;l<5;l++)
	scanf("%d",&a[l]);

        for(l=0;l<5;l++)
	b[l]=a[l];

	sum1=sum(a);
	printf("Addition of array elements is %d \n",sum1);

//	minmax(b);

        printf("Smallest element in array is %d and largest element is %d \n",b[0],b[5]);
*/

	printf("Enter elements in a 2Darray\n");
	for(l=0;l<3;l++)
	{
		for(m=0;m<3;m++)
		{
         		scanf("%d",&a1[l][m]);

		}
	}
	for(l=0;l<3;l++)
	{
		for(m=0;m<3;m++)
		{
         		b1[l][m]=a1[l][m];

		}
	}



//	sum2=sum_2d(a1);
//	minmax(a);

  //      printf("Addition of 2D array elements is %d \n",sum2);

        minmax2(b1);

    //    printf("Smallest element in 2Darray is %d and largest element is %d \n",b1[0][0],b1[3][3]);

	return 0;
		
}

int sum(int a[5])
{

	int sum1=0,i;
	for(i=0;i<5;i++)
	{
		sum1=sum1+a[i];
	}
	return sum1;
}

int minmax(int a[5])
{
	int i,j,temp;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}

//	return a;
}

int sum_2d(int a1[3][3])
{
	int l,m,sum=0;
       	for(l=0;l<3;l++)
	{
		for(m=0;m<3;m++)
		{
         		sum=sum+a1[l][m];

		}
	}

	return sum;
}

int minmax2(int a1[][3])
{
	int *p;
	int l,m,min=32768,max=-32768;
	p=a1;
       /*	for(l=0;l<9;l++)
	{
		
         		if(*(p+l)>*(p+l+1))
			{1
				temp=*(p+l);
				*(p+l)=*(p+l+1);
				*(p+l+1)=temp;

			}

		
	
	}
	for(l=0;l<3;l++)
	{
		printf("\n");
		for(m=0;m<3;m++)
		{
         		printf("%d\t",a1[l][m]);

		}
	} */

	for (l=0;l<3;l++)
		for(m=0;m<3;m++)
		{
			min=(a1[l][m]<min)?a1[l][m]:min;
			max=(a1[l][m]>max)?a1[l][m]:max;
		}

printf("%d%d",min,max);

         return min;

}
