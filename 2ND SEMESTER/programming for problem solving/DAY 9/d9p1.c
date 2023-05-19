#include<stdio.h>

void display(int *b,int m)
{
	int i;
	for ( i=0;i<m;i++)
	{
		printf ("a[%d]=%d\n",i,*b);
		b++;
	}
}
	int main ()
	{
	int k=8, a[]={5,10,15,20,25},n;
	n=5;
	display(a,n);

	return 0;
}

	

