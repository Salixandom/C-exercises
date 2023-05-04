#include <stdio.h>
int main()
{
    int n1,n2,rem,gcd,a,b;
    printf("Enter your two number : ");
    scanf("%d %d",&n1,&n2);
    a=n1,b=n2;
    while(n2!=0)
    {
        rem=n1%n2;
        n1=n2;
        n2=rem;
    }
    gcd=n1;
    printf("\nGCD = %d\n",gcd);
    printf("\nLCM = %d\n",a*b/gcd);
}
