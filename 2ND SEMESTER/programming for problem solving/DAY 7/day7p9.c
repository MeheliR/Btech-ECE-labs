 #include<stdio.h>
 int cube(int,int,int);

int main()

{

int x,y,z,s;

    printf("enter three number");

scanf("%d %d %d",&x,&y,&z);

s=cube(x,y,z);

printf("value is %d",s);



}

int cube(int a,int b,int c)

{



int D;

    D=a*a*a+b*b*b+c*c*c+(2*a*b+2*b*c+2*c*a);

return D;



}












