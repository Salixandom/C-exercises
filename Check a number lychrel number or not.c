#include <stdio.h>

int rev_12(int n)
{
    int r1,r2,res=0;
    while(n!=0)
    {
        r1=n/10;
        r2=n%10;
        n=r1;
        res=res*10+r2;
    }
    return res;
}

int main()
{
    int n,temp;
    printf("Enter your number: ");
    scanf("%d",&n);
    temp=n+rev_12(n);
    if(temp==rev_12(temp))
        printf("\n%d is not a Lychrel number\n",n);
    else
        printf("\n%d is a Lychrerl number\n",n);
}
