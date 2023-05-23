//c program to find lower triangular matrix//

#include<stdio.h>
#include<conio.h>
int main()
{
		int a[3][3],i,j,flag=0,sum=0;
	printf("\n enter values for the matrix:\n");
	for(i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
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
	for (i=0;i<3;i++)
	for(j=0;j<3;j++)
	{
		if ((j>i)&&(a[i][j]!=0))
		{flag=1;
		break;
		}
	}
	{
	
		if (flag==1)
		printf("\n not lower triangular matrix");
		else
		printf("\n lower triangular matrix");
    }
    for ( i=0;i<3;i++)
    {
    	for (j=0;j<3;j++)
    	{
    		if (i>j)
    		{
    			sum=sum+a[i][j];
			}
		}
	}
	printf ("\n sum of the lower trigular matrix: %d",sum);
return 0;

}
