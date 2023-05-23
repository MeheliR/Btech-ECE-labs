//c program to interchange diagonals of a square matrix//

#include<stdio.h>
#include<conio.h>
 int main()
 {
 
	int a[3][3],i,j,temp,n=0;
	for(i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			printf("enter the numbers of pockets[%d][%d]:",i,j);
			scanf ("%d",&a[i][j]);
		}
	}
	printf ("\n before the interchange of the diagonal elements: \n");
	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			printf ("%3d",a[i][j]);
		}
		printf ("\n");
	}
	n=3-1;
	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			if (i==j)
			{temp=a[i][j];
			a[i][j]=a[i][n];
			a[i][n]=temp;
			n--;
			}
		}
	}
	printf ("after the interchange of diagonal elements:\n");
	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			printf ("%3d",a[i][j]);
			
		}
		printf ("\n");
		
	}
	return 0;
}

