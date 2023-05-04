#include <stdio.h>

int prime_num(int x)
{
    int a,count=0;
    for(a=1 ; a<x ; a++)
    {
        if(x%a==0)
            count++;
    }
    if(count==1)
        return x;
    else
        return 0;
}

int main()
{
    int m,n,x;
    printf("Enter your starting value: ");
    scanf("%d",&m);
    printf("Enter your ending value: ");
    scanf("%d",&n);
    printf("\nYour prime numbers are: \n");
    for(x=m ; x<=n ; x++)
    {
        if(x==prime_num(x))
            printf("%d ",x);
    }
    printf("\n");
}
