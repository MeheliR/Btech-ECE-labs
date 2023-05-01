#include <stdio.h>
int main()
{
 int p, q, i, gcd;
 printf("Enter two integers: ");
 scanf("%d %d", &p, &q);
 for(i=1; i <= p && i <= q; ++i)
 {
 // Checks if i is factor of both integers
 if(p%i==0 && q%i==0)
 gcd = i;
 }
 printf("G.C.D of %d and %d is %d", p, q, gcd);
 return 0;
}