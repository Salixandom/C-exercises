#include <stdio.h>
int main()
{
    int n,x,y,i,j,a,b;
    printf("Enter middle line star number: ");
    scanf("%d",&n);
    printf("\n");
    for(x=1 ; x<=n ; x++)
    {
        for(i=n-x ; i>=1 ; i--)
        {
            printf("  ");
        }
        for(a=1 ; a<=x*2-1 ; a++)
        {
            if(a%2!=0)
                printf("%c ",42);
            else
                printf("  ");
        }
        printf("\n");
    }
    for(y=n ; y>=1 ; y--)
    {
        for(j=1 ; j<=n-y ; j++)
        {
            printf("  ");
        }
        for(b=1 ; b<=y*2-1 ; b++)
        {
            if(b%2!=0)
                printf("  ");
            else
                printf("%c ",42);
        }
        printf("\n");
    }
}
