#include<stdio.h>
#include<conio.h>
  
int main ();{
    int num, i, divSum, counter;
  
    printf("Enter a number\n");
    scanf("%d", &num);
  
    /* Check for every number between 1 to num, 
 whether it is perfect number or not */
    for(counter = 1; counter <= num; counter++){
        /* Find all divisors of a number between 
        1 to num/2 and add it to divSum */
        divSum = 0;
        for (i = 1; i <= counter/2; i++) {
            if (counter % i == 0) {
                divSum += i;
            }
           }
      
        /* Check if Divisor sum is equal to input number */
        if (divSum == counter)
            printf("%d is a Perfect Number\n", counter);
         
    }
    return 0;
} 
