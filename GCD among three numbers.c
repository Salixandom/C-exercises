#include <stdio.h>
int main()
{
    int a,b,c,d,n1,n2,n3,gcd,rem1,rem2;
    printf("Enter your three numbers : ");
    scanf("%d %d %d",&n1,&n2,&n3);
    a=n1,b=n2,c=n3;
    do
    {
        while(n2!=0)
        {
            rem1=n1%n2;
            n1=n2;
            n2=rem1;
        }
        d=n1;
        rem2=n3%d;
        n3=d;
        d=rem2;
    }while(d!=0);
    gcd=n3;
    printf("\nGCD = %d\n",gcd);
}
