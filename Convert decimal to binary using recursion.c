#include <stdio.h>

int dec_bin(int n)
{
    static int i=1,r1,r2,a=0;
    if(n!=0)
    {
        r1=n/2;
        r2=n%2;
        a+=r2*i;
        i*=10;
        return dec_bin(r1);
    }
    else
        return a;
}

int main()
{
    int n;
    printf("Enter your Decimal number: ");
    scanf("%d",&n);
    printf("\nBinary form is: %d\n",dec_bin(n));
}
