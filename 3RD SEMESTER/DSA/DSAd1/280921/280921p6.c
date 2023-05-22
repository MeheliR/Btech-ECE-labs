// c program to find sum and average of the aaray//
#include  <stdio.h>
 int main()
{
   int a[10],i,sum=0,avg;
   for (i=0;i<10;i++)
   {
   	printf("\n enter number:");
   	scanf ("%d",&a[i]);
   }
   for (i=0;i<10;i++)
   {
   	sum=sum+a[i];
   	avg=sum/10;
   }
   printf ("\n sum of array numbers= %d",sum);
   printf ("\n average of the array numbers= %d",avg);
   return 0;
}
