#include <stdio.h>

long long int pow_12(int x,int n)
{
    static int count=0;
    count++;
    if(count==x)
        return n;
    else
        return(n*pow_12(x,n));
}

int main()
{
    int x,n;
    printf("Enter your number: ");
    scanf("%d",&n);
    printf("Enter your power: ");
    scanf("%d",&x);
    printf("\n%d^%d: %lld\n",n,x,pow_12(x,n));
}
