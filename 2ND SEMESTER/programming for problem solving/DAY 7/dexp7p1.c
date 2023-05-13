

#include<stdio.h>
#include<conio.h>
int main()
{
    int a, b, c, small;
    printf("Enter three numbers : ");
    scanf("%d%d%d", &a, &b, &c);
    if(a<b)
    {
        if(b<c)
            small = a;
        else
        {
            if(a<c)
                small = a;
            else
                small = c;
        }
    }
    else
    {
        if(b<c)
            small = b;
        else
            small = c;
    }
    printf("\nSmallest number is: %d", small);
    
    return 0;
}



