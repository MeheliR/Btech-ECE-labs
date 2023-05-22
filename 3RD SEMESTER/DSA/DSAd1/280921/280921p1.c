#include <stdio.h>
int main()
{
   int i,n,a[100];
   printf("Input the number of elements to store in the array:");
   scanf("%d",&n);
   
   printf("Input %d number of elements in the array :\n",n);
   for(i=0;i<n;i++)
      {
	    scanf("%d",&a[i]);
	  }
      
   printf("\nThe values store into the array are : \n");
   for(i=0;i<n;i++)
     {
	   printf(" %2d",a[i]);
	 }
 return 0;
}
