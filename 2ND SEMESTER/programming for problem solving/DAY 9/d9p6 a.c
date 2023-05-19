#include <stdio.h>
int smallest(int *a, int k, int n,int small)
{
 int pos=k;
 for (int i=k;i<n;i++)
 {
 if (*a<small)
 {
 small=*a;
 pos=i;
 } a++;
 }
 return pos;
}
void sort(int *a,int n)
{
 int temp=0;
 int pos=0;
 int small;
 for (int k=0;k<n-1;k++)
 {
 small=a[k];
 pos=k;
 int p2=smallest(&a[k],k,n,small);
 temp=a[k];
 a[k]=a[p2];
 a[p2]=temp;
 }
}
int main ()
{
 int n;
 printf("Enter the range of the array: ");
 scanf("%d",&n);
 int a[n];
 printf("Enter the elements of the array:\n");
 for (int i=0;i<n;i++)
 scanf("%d",&a[i]);
 sort(&a[0],n);
 printf("The elements of the array after sorting in Ascending Order are:\n");
 for (int i=0;i<n;i++)
 printf("%d ",a[i]);
}

