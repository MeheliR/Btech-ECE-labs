#include <stdio.h>
 int fact (int m)
 {
 	if (m==1)
 	return 1;
 	else 
 	return m*fact(m-1)
 
}

int main ()
 {
 	float sum=0;
 	int i,n;
 	printf ("ENTER NO. OF TERMS ");
 	scanf("%d,&n");
 	for(i=1;i<=n;i++)
 	{
 		f=fact(i);
 		sum=sum+pow(i,i)/(float)f;
	 }
	 printf("\nsum=%f,"sum);
	 return 0;
 }
}
