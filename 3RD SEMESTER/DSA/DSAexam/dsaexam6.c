#include <stdio.h>

int main()
{
	int a[100],position,i,n;
	printf("enter number of elements in array : \n");
	scanf("%d",&n);
	
	printf ("enter elements: %d \n",n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("enter the location where you wish to delete elements: \n");
	scanf("%d",&position);
	if (position>=n+1)
	printf("deletion not possible. \n");
	else 
	{
		for (i=position-1;i<n-1;i++)
		a[i]=a[i+1];
		printf ("resultant arrary: \n");
		
		for (i=0;i<n-1;i++)
		printf ("%d \n",a[i]);
	}
	return 0;
}
