#include <stdio.h>
int main()
{
    int n,x,r,a,b;
    printf("Enter your row number: ");
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
}
