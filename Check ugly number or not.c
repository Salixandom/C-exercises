#include <stdio.h>

int prime_12(int x,int i)
{
    int a,b,count1=0,count2=0;
    for(a=2 ; a<x ; a++)
    {
        if(x%a==0)
            count1++;
    }
    for(b=2 ; b<i ; b++)
    {
        if(i%b==0)
            count2++;
    }
    if(count1==0 && count2==0)
        return 1;
    else
        return 0;
}

int main()
{
    int n,x,i,count=0,step=0;
    printf("Enter your number: ");
    scanf("%d",&n);
    for(x=2 ; x<n ; x++)
    {
        for(i=n-1 ; i>=x ; i--)
        {
            if(i*x==n)
            {
                step+=prime_12(x,i);
                if((x==2 || x==3 || x==5)&&(i==2 || i==3 || i==5))
                    count++;
            }
        }
    }
    if(n==1)
        printf("\n%d is an Ugly number.\n",n);
    else if(step==count)
        printf("\n%d is an Ugly number.\n",n);
    else
        printf("\n%d is not an Ugly number.\n",n);
}
