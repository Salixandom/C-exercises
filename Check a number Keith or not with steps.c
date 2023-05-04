#include <stdio.h>

int count_12(int n)
{
    int r1,count=0;
    while(n!=0)
    {
        r1=n/10;
        n=r1;
        count++;
    }
    return count;
}

int main()
{
    int n,m,x,i,a=0,sum=0;
    printf("Enter your number: ");
    scanf("%d",&n);
    m=n;
    x=count_12(n);
    int digit[x];
    for(i=0 ; i<x ; i++)
    {
        digit[i]=n%10;
        n/=10;
    }
    while(a==0)
    {
        sum=0;
        for(i=x-1 ; i>=0 ; i--)
        {
            sum+=digit[i];
            if(i>0)
                printf(" %d +",digit[i]);
            else
                printf(" %d ",digit[i]);
        }
        printf("= %d\n",sum);
        if(m==sum)
        {
            printf("\n%d is a Keith number\n",m);
            a++;
            break;
        }
        if(sum>m)
        {
            printf("\n%d is not a Keith number\n%d",m,sum);
            a++;
            break;
        }
        for(i=x-2 ; i>=0 ; i--)
        {
            digit[i+1]=digit[i];
        }
        digit[0]=sum;
    }
}
