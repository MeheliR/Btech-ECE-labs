#include<stdio.h>

int main()

{

int num;

    printf("Enter the value of num \n");

    scanf("%d", &num);

  


{
int fib1 = 0, fib2 = 1, fib3, count = 0;

    printf("First %d FIBONACCI numbers are …\n", num);

    printf("%d\n", fib1);

printf("%d\n", fib2);

    count = 2; 

    while (count < num)

    {

fib3 = fib1 + fib2;

count++;

    printf("%d\n", fib3);

fib1 = fib2;

fib2 = fib3;

   }

}




{



int i,j,a=0,b=1,c=0,d=0,n;

    n=num;

for(i=0;i<=n;i++)

    {

        c=a+b;

        a=b;

        b=c;

        d=a+b;

       for(j=c+1;j<d;j++)

        {

             if(j<=n)

            {

                  printf("\n non fibonacci is %d ,",j);

            }
             else

     break;



        }

    }

}
}


