#include <stdio.h>
int main()
{
    int n,x,r,a,b,c,d;
    printf("Enter your middle row range: ");
    scanf("%d",&n);
    printf("\n");
    for(r=1 ; r<=n ; r++)
    {
        for(x=n-r ; x>=1 ; x--)
        {
            printf("  ");
        }
        for(a=1 ; a<=r ; a++)
        {
            printf("%d ",a);
        }
        for(b=r-1 ; b>=1 ; b--)
        {
            printf("%d ",b);
        }
        printf("\n");
    }
    for(r=n-1 ; r>=1 ; r--)
    {
        for(x=n-r ; x>=1 ; x--)
        {
            printf("  ");
        }
        for(c=1 ; c<=r ; c++)
        {
            printf("%d ",c);
        }
        for(d=r-1 ; d>=1 ; d--)
        {
            printf("%d ",d);
        }
        printf("\n");
    }
}
