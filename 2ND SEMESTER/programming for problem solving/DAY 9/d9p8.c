#include <stdio.h>
void merge(int *a,int *b,int *c,int n3)
{
 for (int i=0;i<n3;i++) {
 if (*a<*b)
 {
 *c=*a;
 a++;
 }
 else
 {
 *c=*b;
 b++;
 }
 c++;
 }
}
int main ()
{
 printf("Enter the range of the 1st array: ");
 int n1;
 scanf("%d",&n1);
 int a[n1];
 printf("Enter the elements of the 1st array in Ascending Order:\n");
 for (int i=0;i<n1;i++)
 scanf("%d",&a[i]);
 printf("Enter the range of the 2nd array: ");
 int n2;
 scanf("%d",&n2);
 int b[n2];
printf("Enter the elements of the 2nd array in Ascending Order:\n");
 for (int i=0;i<n2;i++)
 scanf("%d",&b[i]);
 int n3=n1+n2;
 int c[n3];
 merge(&a[0], &b[0],&c[0],n3);
 printf("Array 1:\n");
 for (int i=0;i<n1;i++)
 printf("%d ",a[i]);
 printf("\nArray 2:\n");
 for (int i=0;i<n2;i++)
 printf("%d ",b[i]);
 printf("\nMerged Array:\n");
 for (int i=0;i<n3;i++)
 printf("%d ",c[i]);
}
