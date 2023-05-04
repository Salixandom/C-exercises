#include <stdio.h>
#include <math.h>

int count_12(int n)
{
    int count=0,r1,r2;
    while(n!=0)
    {
        r1=n/10;
        n=r1;
        count++;
    }
    return count;
}

int temp_12(int n)
{
    int r1,r2,res=0,m;
    m=count_12(n);
    while(n!=0)
    {
        r1=n/10;
        r2=n%10;
        n=r1;
        res+=pow(r2,m);
        m--;
    }
    return res;
}

int main()
{
    int n;
    printf("Enter your number: ");
    scanf("%d",&n);
    if(n==temp_12(n))
        printf("\n%d is a Disarium number\n",n);
    else
        printf("\n%d is not a Disarium number\n",n);
}
