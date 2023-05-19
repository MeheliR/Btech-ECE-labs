#include <stdio.h>
int dup(int *a, int n, int e)
{
 int c=0;
 for (int i=0;i<n;i++)
 {
 if (*a==e)
 c=c+1;
 a++;
 }
 return c;
}
int History(int *a, int n,int e)
{
 for (int i=0;i<n;i++)
 {
 if (e==*a)
 return 1;
 a++;
 }
 return 0;
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
 printf("The frequency of elements are given as follows:\n");
 for (int i=0;i<n;i++)
 {
 int historyVal=History(&a[0], i, a[i]);
 if (historyVal==0)
 {
 int dupVal=dup(&a[0], n, a[i]);
 printf("%d : %d\n",a[i],dupVal);
}
}
}
