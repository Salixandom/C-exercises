#include <stdio.h>

int sum_digit(int n)
{
    static int r1,r2,sum=0;
    if(n!=0)
    {
        r1=n/10;
        r2=n%10;
        sum+=r2;
        return sum_digit(r1);
    }
    else
        return sum;
}

int main()
{
    int n;
    printf("Enter your number: ");
    scanf("%d",&n);
    printf("\nSum: %d\n",sum_digit(n));
}
