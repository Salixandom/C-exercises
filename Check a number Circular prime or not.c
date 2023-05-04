#include <stdio.h>
#include <math.h>

int temp_1(int n)
{
    int count=0,r1,r2;
    while(n!=0)
    {
        r1=n/10;
        r2=n%10;
        n=r1;
        count++;
    }
    return count-1;
}

int temp_2(int n,int x)
{
    int r1,r2;
    r1=n/pow(10,x);
    r2=fmod(n,pow(10,x));
    return (r2*10)+r1;
}

int main()
{
    int n,m,x,y,temp,a,b,count=0,c=0;
    printf("Enter your number: ");
    scanf("%d",&n);
    for(y=2 ; y<n ; y++)
    {
        if(n%y==0)
            c++;
    }
    if(c==0)
    {
        m=n;
        x=temp_1(n);
        temp=temp_2(n,x);
        while(n!=temp)
        {
            m=temp;
            temp=temp_2(m,x);
            for(a=2 ; a<m ; a++)
            {
                if(m%a==0)
                    count++;
            }
            for(b=2 ; b<temp ; b++)
            {
                if(temp%b==0)
                    count++;
            }
        }
        if(count==0)
            printf("\n%d is a Circular Prime number\n",n);
        else
            printf("\n%d is not a Circular Prime number\n",n);
    }
    else
        printf("\n%d is not a Circular Prime number\n",n);
}
