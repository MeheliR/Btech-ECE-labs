#include <stdio.h>
void sort(int *a, int n)
{ 
 int temp; 
 for(int i=0; i<n; i++) 
 { 
 for(int j=0; j<n-i-1; j++) 
 { 
 if(a[j]>a[j+1]) 
 { 
 temp = a[j+1]; 
 a[j+1] = a[j]; 
 a[j] = temp; 
 } 
 } 
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
