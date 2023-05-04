#include <stdio.h>

int temp_12(int n)
{
    int r1,r2,res=0;
    while(n!=0)
    {
        r1=n/10;
        r2=n%10;
        n=r1;
        res+=r2;
    }
    return res;
}

int main()
{
    int n;
    printf("Enter your number: ");
    scanf("%d",&n);
    if(n%temp_12(n)==0)
        printf("\n%d is a Harshad number.\n",n);
    else
        printf("\n%d is not a Harshad number.\n",n);
}
