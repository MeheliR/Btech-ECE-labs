#include<stdio.h>
int main ()
{
	int i,num,product=1;
	printf("enter the values of num\n");
	scanf("%d",&num);
	for(i=num;i>1;i--)
	{
		product=i*product;
	}
	

printf("factorial is %d",product);
return  0;
}
