#include<stdio.h>
int fact(int n)
{
 int f=1;
 for (int i=1;i<=n;i++)
 f=f*i;
 return f; 
}
int expo(int n)
{ int p=1;
 for (int i=1;i<=n;i++)
 p=p*n;
 return (p);
}
int main()
{
 int n;
 float s=0;
 printf("Enter the range of the series: ");
 scanf("%d",&n);
 for (int i=1;i<=n;i++)
 s=s+((float)(expo(i))/(float)(fact(i)));
 printf("The sum of the series is: %f",s);
}

