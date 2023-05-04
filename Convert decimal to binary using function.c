#include <stdio.h>

int dec_to_bin(int n)
{
    long long int a=0,i=1,r1,r2;
    while(n!=0)
    {
        r1=n/2;
        r2=n%2;
        n=r1;
        a+=r2*i;
        i*=10;
    }
    return a;
}

int main()
{
    int n;
    printf("Enter your Decimal number: ");
    scanf("%d",&n);
    printf("\nYour converted binary number is %lld\n",dec_to_bin(n));
}
