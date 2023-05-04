#include <stdio.h>

void check_prime_12(int n)
{
    int x,count=0;
    for(x=1 ; x<n ; x++)
    {
        if(n%x==0)
            count++;
    }
    if(count==1)
        printf("\nYour input is a prime number.\n");
    else
        printf("\nYour input is not a prime number.\n");
}

void check_armstrong_12(int n)
{
    int m,a,b=0,r1,r2,x,i=1,count=0;
    n=a=m;
    while(m!=0)
    {
        r1=m/10;
        m=r1;
        count++;
    }
    while(n!=0)
    {
        r1=n/10;
        r2=n%10;
        n=r1;
        for(x=1 ; x<=count ; x++)
        {
            i*=r2;
        }
        b+=i;
        i=1;
    }
    if(b==a)
    {
        printf("\nYour input is an Armstrong number.\n");
    }
    else
        printf("\nYour input is not an Armstrong number.\n");
}

int main()
{
    int n;
    printf("Enter your number: ");
    scanf("%d",&n);
    check_prime_12(n);
    check_armstrong_12(n);
}
