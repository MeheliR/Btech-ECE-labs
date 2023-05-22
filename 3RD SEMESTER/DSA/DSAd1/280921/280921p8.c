// c program to find largest and 2nd largest element in a array//
#include <stdio.h>
#include<limits.h>
int main ()
{
	int a[100],i,n,l1,l2;
	printf ("enter the size of the array: \n");
	scanf ("%d",&n);
	printf ("enter the elements of the array : \n");
   for (i=0;i<n;i++)
   {
   
	scanf("%d",&a[i]);
	}
	l1=INT_MIN;
	l2=INT_MIN;
	for (i=0;i<n;i++)
	{
		if (a[i]>l1)
		{
			l2=l1;
			l1=a[i];
			
		}
		else if (a[i]>l2 && a[i]<l1)
		{
			l2=a[i];
		}
	}
	printf ("\n first largest= %d",l1);
	printf ("\n second largest = %d",l2);
	
	
      return 0;
} 
