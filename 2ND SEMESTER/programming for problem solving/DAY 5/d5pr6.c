#include <stdio.h>

int main()
{
    int i, j, start, end, sum;

    
    printf("Enter lower limit: ");
    scanf("%d", &start);
    printf("Enter upper limit: ");
    scanf("%d", &end);

    printf("All Perfect numbers between %d to %d:\n", start, end);
    
    
    for(i=start; i<=end; i++)
    {
        sum = 0;

        
        for(j=1; j<i; j++)
        {
            if(i % j == 0)
            {
                sum += j;
            }
        }
 
        if(sum == i)
        {
            printf("%d, ", i);
        }
    }

    return 0;
}
