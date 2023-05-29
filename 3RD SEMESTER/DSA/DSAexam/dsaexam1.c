#include<stdio.h>

#define N 5

int main ()
{
	int a[N],i,sum=0;
	float avg;
	
	printf ("Enter %d integer numbers\n",N);
	for(i=0;i<N;i++)
	scanf("%d",&a[i]);
	
	for(i=0;i<N;i++)
	{
		sum=sum+a[i];
	}
	
	avg=sum/(float)N;
	printf("\nSum of %d numbers :%d\n",N,sum);
	printf("\nAverage of %d numbers:%f\n",N,avg);
	
	return 0;
}
