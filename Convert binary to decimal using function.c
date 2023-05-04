#include <stdio.h>

int bin_to_dec(int n)
{
    int r1,r2,a=1,count=0,b=0,x;
    while(n!=0)
    {
        r1=n/10;
        r2=n%10;
        n=r1;
        for(x=1 ; x<=count ; x++)
            a*=2;
        count++;
        b+=a*r2;
        a=1;
    }
    return b;
}

int main()
{
    int n;
    printf("Enter your binary: ");
    scanf("%d",&n);
    printf("\nYour converted decimal is %d\n",bin_to_dec(n));
}
