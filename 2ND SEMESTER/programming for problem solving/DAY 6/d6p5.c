#include<stdio.h>
int main()
{
int i,j,left,right,k,rightcount,count,rows;
printf("Enter number of rows\n");
scanf("%d",&rows);
count=rows-1;
left=1;
right=0;

for(i=1;i<=rows;i++)
{
for(k=1;k<=count;k++)
    {
printf(" ");
    }
for(j=i;j<=left;j++)
    {
printf("%d",j);
    }
left+=2;
if(i!=1)
       {
for(j=right;j>=i;j--)
             {
  printf("%d",j);
                 }

       }
right+=2;
       printf("\n");
       count--;
}
return 0;
}








