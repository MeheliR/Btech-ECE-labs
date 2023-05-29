#include<stdio.h>

int main ()
{
	int a[10],i,j,t,index,key;
	for(i=0;i<10;i++)
	{
		printf("\nenter number:");
		scanf("%d",&a[i]);
	}
	printf("\nenter element to delete from the list:");
	scanf("%d",&key);
	index=9;
	for(i=0;i<index;i++)
	{
		if(a[i]==key)
		{
			for(j=i+1;j<=index;j++)
			a[j-1]=a[j];
			i--;
			index--;
		}
	}
	printf("\nArray after deleting %d is :",key);
	for (i=0;i<index;i++)
	printf("\n%d",a[i]);
	return 0;
	
}
