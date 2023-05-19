#include <Stdio.h>
int search(int *a,int n,int e)
{
 int u=n-1, l=0;
 int mid;
 while(u>=l)
 {
 mid=(u+l)/2;
 if (a[mid]==e)
 return mid;
 else if (a[mid]<e)
 l=mid+1;
 else if (a[mid]>e)
 u=mid-1;
 }
 return -1;
}
int main ()
{
 int n,e;
 printf("Enter the range of the array: ");
 scanf("%d",&n);
 int a[n];
 printf("Enter the elements of the array in sorted manner:\n");
 for (int i=0;i<n;i++)
 scanf("%d",&a[i]);
 printf("Enter the element to be searched: ");
 scanf("%d",&e);
 int ret=search(&a[0],n,e);
 if (ret==-1)
 printf("Value not Found");
 else
 printf("Value found at position: %d",ret);
}

