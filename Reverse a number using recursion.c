#include <stdio.h>

int reverse_num(int n)
{
    static int r1,r2,a;
    if(n!=0)
    {
        r1=n/10;
        r2=n%10;
        n=r1;
        a=a*10+r2;
        reverse_num(n);
    }
    else
        return a;
}

int main()
{
    int n;
    printf("Enter your number: ");
    scanf("%d",&n);
    printf("\nReverse version is: %d\n",reverse_num(n));
}
