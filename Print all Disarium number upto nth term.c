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
    int n,x;
    printf("Enter your nth term: ");
    scanf("%d",&n);
    printf("---------------------------------------------------\n");
    printf("Disarium numbers upto %dth term are: \n\n",n);
    for(x=1 ; x<=n ; x++)
    {
        if(x==temp_12(x))
            printf("%d ",x);
    }
    printf("\n");
}
