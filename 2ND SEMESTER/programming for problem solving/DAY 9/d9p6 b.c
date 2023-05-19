#include <stdio.h>
void sort(int *a, int n)
{
 int i, j, temp;
 for(i=1;i<n;i++)
 { 
 temp = a[i]; 
 j = i-1; 
 while((temp < a[j]) && (j>=0)) 
 { 
 a[j+1] = a[j]; 
 j--; 
 
 } 
 a[j+1] = temp;
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

