#include<stdio.h>
#define N 5

int main()
{
	int a[N],b[N],i;
	
	printf("Enter %d integer numbers\n",N);
	for(i=0;i<N;i++)
	scanf ("%d",&a[i]);
	printf ("\n\nCopying elements of array a to b \n");
	for(i=0;i<N;i++)
	b[i]=a[i];
	
	printf ("\nOriginal (a[%d])--> Copy(b[%d])\n",N,N);
	for(i=0;i<N;i++)
	printf("%4d\t\t-->%6d\n",a[i],b[i]);
	
	return 0;
}
