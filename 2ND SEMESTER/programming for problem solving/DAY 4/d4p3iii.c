//S=-1+(1/3!)-(1/5!)...
#include <stdio.h>
int main()
{
    int n;
    float fact, s=0;
    printf("Enter the range of the series: ");
    scanf("%d",&n);
    for (int i=1; i<=n;i++)
    {
        fact=1;
        for (int j=1;j<=i;j++)
        fact=fact*j;
        if (i%2==0)
            s=s+(1.0/fact);
        else
            s=s-(1.0/fact);
    }
    printf("The Sum of the series is: %f",s);
    return 0;
}
