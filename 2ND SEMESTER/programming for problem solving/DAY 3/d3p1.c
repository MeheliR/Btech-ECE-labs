#include<stdio.h  >
int main()
{
	
	int num1,num2,GCD;
	printf("enter two integer values ");
	
	scanf("%d%d,&num1,&num2");
	int i;
	for(i=1;i<=num1&& i<=num2;i++)
{
	if((num1%i==0)&&(num2%i==0))
	{
		GCD=	i;
		
	}
	
}
printf(GCD of two number=%d,GCD);
return0;
}
