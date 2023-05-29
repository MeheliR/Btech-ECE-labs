#include <stdio.h>
#include<conio.h>

	int main()
    {
      int a[100],i,pos,size,item;
	  printf ("enter the size of the array:\n");
	  scanf("%d",&size);
	  printf ("enter the element in the array:\n");
	  for (i=0;i<size;i++)
	  {scanf ("%d",&a[i]);
	   } 
	   printf ("enter the position where you wish to insert:\n");
	   scanf("%d",&pos);
	   printf ("enter the element you wish to insert:\n");
	   scanf("%d",&item);
	   for (i=size;i>=pos;i--)
	   {a[i]=a[i-1];
	   }
	   a[pos]=item;
	   size++;
	   printf ("resultant array element:\n");
	   for (i=0;i<size;i++)
{
	printf("%3d",a[i]);
}
return 0;
 }
