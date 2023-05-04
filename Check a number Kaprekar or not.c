#include <stdio.h>
#include <math.h>

int count_12(int n)
{
    int r1,r2,count=0;
    while(n!=0)
    {
        r1=n/10;
        r2=n%10;
        n=r1;
        count++;
    }
    return count;
}

int main()
{
    int n;
    int dig,temp1,temp2,r1,r2,res=0;
    printf("Enter your number: ");
    scanf("%d",&n);
    dig=count_12(n);
    temp1=pow(n,2);
    temp2=pow(10,dig);
    while(temp1!=0)
    {
        r1=temp1/temp2;
        r2=temp1%temp2;
        temp1=r1;
        res+=r2;
    }
    if(res==n)
        printf("\n%d is a Kaprekar number\n",n);
    else
        printf("\n%d is not a Kaprekar number\n",n);
}
