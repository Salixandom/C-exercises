#include <stdio.h>

int rev_12(int n)
{
    static int r1,r2,a=0;
    if(n!=0)
    {
        r1=n/10;
        r2=n%10;
        n=r1;
        a=a*10+r2;
        return rev_12(n);
    }
    else
        return a;
}

int main()
{
    int n;
    printf("Enter your number: ");
    scanf("%d",&n);
    if(n==rev_12(n))
        printf("\nYour input is a Palindrome number.\n");
    else
        printf("\nYour input is not a Palindrome number.\n");
}
