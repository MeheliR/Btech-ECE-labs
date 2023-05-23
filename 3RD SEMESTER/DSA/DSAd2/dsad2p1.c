//c program to add two matrices//
#include<stdio.h >
#include<conio.h>
int main()
{
	int i,j,a[3][3],b[3][3],result[3][3];
	printf("Enter the elements of first matix:\n");
	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			scanf ("%d",&a[i][j]);
		}
	}
	printf ("\n");
		printf("Enter the elements ofsecond matix:\n");
	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			scanf ("%d",&b[i][j]);
		}
	}
	printf ("\n");
	printf("output: \n");
	for (i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			result[i][j]=a[i][j]+b[i][j];
			printf("%d ",result[i][j]);
		}
		printf("\n");
		
	}
return 0;
}
