#include <stdio.h>
int search(int *a,int n, int e)
{
 for (int i=0;i<n;i++)
 {
 if (*a==e)
 return i;
 a=a+1;
 }
 return -1;
}
int main ()
{
 int n,e;
 printf("Enter the range of the array: ");
 scanf("%d",&n);
 int a[n];
 printf("Enter the elements of the array:\n");
 for (int i=0;i<n;i++)
 scanf("%d",&a[i]);
 printf("Enter the element to be searched: ");
 scanf("%d",&e);
 int res=search(&a[0], n, e);
 if (res==-1)
 printf("Value not found");
 else
 printf("Value found at position:  %d", res );
}
