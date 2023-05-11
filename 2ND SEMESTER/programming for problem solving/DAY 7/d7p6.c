#include<stdio.h> 
 int main()

{

int a,b,B;

    printf("enter n and r");

    scanf("%d %d",&a,&b);

  

    printf("\n ans id %d",B);

}

int coff(int a,int b)

             {



           int i,n,l=1,K,m=1,z=1,S,M,A;



            n=a;

             S=a;
             M=b;

for(i=1;i<=n;i++)

                 {


l=l*a;

                     a--;

                 }

printf("factorial of b is %d ",l);
n=b;

for(i=1;i<=n;i++)

                 {



                     M=m*b;

                     b--;

                 }

  printf("\n factorial of b is %d ",m);

                 K=S-M;

n=K;

for(i=1;i<=n;i++)

                 {



      z=z*K;

                     K--;

                 }

printf("\n factorial of a-b is %d ",z);

                 A=l/(m*z);

return(A);

             }

