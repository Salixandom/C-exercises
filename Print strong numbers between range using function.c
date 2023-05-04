#include <stdio.h>

int strong_num(int x)
{
    int r1,r2,i,a=1,b=0;
    while(x!=0)
    {
        r1=x/10;
        r2=x%10;
        x=r1;
        for(i=r2 ; i>=1 ; i--)
            a*=i;
        b+=a;
        a=1;
    }
    return b;
}

int main()
{
    int n,m,x;
    printf("Enter your starting range: ");
    scanf("%d",&m);
    printf("Enter your ending range: ");
    scanf("%d",&n);
    printf("\n");
    for(x=m ; x<=n ; x++)
    {
        if(x==strong_num(x))
            printf("%d ",x);
    }
    printf("\n");
}
