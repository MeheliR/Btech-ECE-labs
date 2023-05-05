 

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the range: ");
    scanf("%d",&n);
    printf("The Krishnamurthy numbers within the given range are:\n");
    for (int r=1;r<=n;r++)
    {
        int s=0;
        int n3=r;
        while (n3>=1)
        {
            int fact=1;
            for (int i=1;i<=(n3%10);i++)
            fact=fact*i;
            s=s+fact;
            n3=n3/10;
        }
        if (s==r)
            printf("%d ",r);
    }
    return 0;
}
