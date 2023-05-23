//c program to checkupper triangular matrix and find its sum//
#include<stdio.h>
#include<conio.h>
int main ()
{
	int a[3][3],i,j,flag=0,sum;
	printf("\n enter values for the matrix:\n");
	for(i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
			scanf ("%d",&a[i][j]);
	}
	printf ("\n array elements are:\n");
	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
			printf ("%3d",a[i][j]);
		printf ("\n");
	}
	for (i=0;i<3;i++)
	for(j=0;j<3;j++)
	{
		if ((i>j)&&(a[i][j]!=0))
		{flag=1;
		break;
		}
	}
	{
	if (flag==1)
    	printf("\n not upper triangular matrix");
	else
		printf("\n upper triangular matrix");
      {
	  for (i=0;i<3;i++)
      {
	  for(j=0;j<3;j++)
	  {
	   if(i<j)
     	sum=0;
    	sum=sum+a[i][j];
      }
      }
        printf ("\n sum of the upper triangle:%d",sum);
      }
    }
	return 0;
}
