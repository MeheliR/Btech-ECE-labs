#include<stdio.h>
#include<conio.h>

int main()
{
    int n,a[100],c1,c2,c3,c4,c5,c6,c7,c8,c9,c10,i;
    c1 = c2 = c3 = c4 = c5=c6=c7=c8=c9=0;


    printf("Enter the number:");
    scanf("%d",&n);

    printf("\nEnter marks of %d student\n",n);

    for(i=1;i<=n;i++)
    scanf("%d",&a[i]);

    for(i=1;i<=n;i++)
    {
        if(a[i] >= 90 && a[i] < 100)
        c1++;

        if(a[i] >= 80 && a[i] < 90)
        c2++;

        if(a[i] >= 70 && a[i] < 80)
        c3++;

        if(a[i] >= 60 && a[i]< 70)
        c4++;
        
        if ( a [i]>= 50 && a[i]<60)
        c5++;
        if (a [i] >=40 && a [i]<50)
        c6 ++;
        if ( a [i]>=30 && a[i]<40)
        c7++;
        if ( a[i]>=20 && a[i]<30)
        c8++;
        if ( a[i]>=10 && a [i]<20)
        c9++;
        if ( a[i]<=10)
        c10 ++;
        
    }
    

   printf("\nStunent Whose Marks Between 90 And 100 are :: %d ",c1);
   printf("\nStunent Whose Marks Between80 And 90 Are :: %d ",c2);
    printf("\nStunent Whose Marks Between70 And 8 0   Are :: %d ",c3);
    printf("\nStudent whose marks between 60 and 70 are : : %d",c4);
    printf("\nstudent whose marks between 50 and 60 are ::%d",c5);
    printf("\n student whose marks between 40 and 50 are ::%d",c6);
    printf("\nstudent whose marks between 30 and 40 are::%d",c7);
    printf("\nstudent whose between 20 and 30 are ::%d",c8);
    printf("\nstudent whose between 10 and 20 are ::%d",c9);
    printf("\nStunent Whose Marks Less Then 10 Are   :: %d ",c10);

return 0;

}

