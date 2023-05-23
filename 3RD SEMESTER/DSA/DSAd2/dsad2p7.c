//c program to find sum of each row and column of matrix//

#include<stdio.h>
#include<conio.h>
int main ()
{
	int a[3][3],i,j,sum;
	for(i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			printf("enter the numbers of pockets[%d][%d]:",i,j);
			scanf ("%d",&a[i][j]);
		}
	}
	printf ("\n array elements are:\n");
	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			printf ("%3d",a[i][j]);
		}
		printf ("\n");
	}
	//for row sum//
	for (i=0;i<3;i++)
	{
		sum=0;
		for(j=0;j<3;j++)
		sum=sum+a[i][j];
		printf ("\n sum of row %d is %d",i+1,sum);
	}
	//for column sum//
	for (i=0;i<3;i++)
	{	sum=0;
		for(j=0;j<3;j++)
		sum=sum+a[j][i];
		printf ("\n sum of the column %d is %d",i+1,sum);
	}
	return 0;
}
