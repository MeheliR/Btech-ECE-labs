#include <stdio.h>
int main (void)
{
int i,j,k,flag=1,size=3;
int array1[][size] = { { 2, 5, 10},{ 2, 1, 9 } }, array2[][size] = { {10, 5, 2 }, { 9, 1, 2 } };

for(i=0;i<size-1;i++) {
for(j=0,k=size-1;j<size;j++,k--)
{
if(array1[i][j]!=array2[i][k])
{
flag=0;
break;
}
}
}
if(flag)
printf("Mirror image to each other");
else
printf("Not a mirror image to each other");

return 0;
}

