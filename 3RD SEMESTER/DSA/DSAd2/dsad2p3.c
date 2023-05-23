//c program to multiply two matrices//
#include<stdio.h>
#include<conio.h>
int main()
{
	int mat1[3][3],mat2[3][3],result[3][3],i,j,k;
	printf ("enter the elements of first matrix:\n");
	for(i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			scanf ("%d",&mat1[i][j]);
		}
	}
		printf ("enter the elements of second matrix:\n");
	for(i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			scanf ("%d",&mat2[i][j]);
		}
	}
	 for(i=0;i<3;i++)
     {
	   for(j=0;j<3;j++)
	   {
	    	result[i][j]=0;
		for(k=0;k<3;k++)
		{
			result[i][j]=result[i][j]+(mat1[i][k]*mat2[k][j]);
		}
	   }
     }
      printf("result:\n");
     for (i=0;i<3;i++)
     {
	  for(j=0;j<3;j++)
	 {
		printf("%d\t ",result[i][j]);
	 }
    	printf("\n");
     }
return 0;
}
