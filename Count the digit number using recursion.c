#include <stdio.h>

int digit_num(int n)
{
    static int r,count=0;
    if(n!=0)
    {
        r=n/10;
        count++;
        return digit_num(r);
    }
    else
        return count;
}

int main()
{
    int n;
    printf("Enter your number: ");
    scanf("%d",&n);
    printf("\nDigit number: %d\n",digit_num(n));
}
