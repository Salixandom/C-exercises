#include <stdio.h>

float fact_n(int x)
{
    int i,res=1;
    for(i=1 ; i<=x ; i++)
    {
        res*=i;
    }
    return res/x;
}

int main()
{
    int n,x,res=0;
    printf("Enter your nth term number: ");
    scanf("%d",&n);
    for(x=1 ; x<=n ; x++)
    {
        res+=fact_n(x);
    }
    printf("\nYour sum is: %d\n",res);
}
