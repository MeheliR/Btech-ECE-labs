#include <stdio.h>
 
int main ()
{
    int
     n1 = 0, n2 = 1, n3, num, count = 0;
 
    printf("Enter the value of num \n");
    scanf("%d", &num);
    printf("First %d FIBONACCI numbers are ...\n", num);
    printf("%d\n", n1);
    printf("%d\n", n2);
    count = 2; /* n1 and n2 are already used */
    while (count < num)
    {
      n3 = n1 + n2;
        count++;
        printf("%d\n", n3);
        n1 = n2;
        n2 = n3;
   }
   return 0;

}

