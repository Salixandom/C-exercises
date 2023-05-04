#include <stdio.h>
int main()
{
    int x,y,a,b,i,j,n;
    printf("Enter your range: ");
    scanf("%d",&n);
    printf("\n");
    for(a=1 ; a<=n ; a++)
    {
        for(x=1 ; x<=n-a ; x++)
        {
            printf("  ");
        }
        for(i=1 ; i<=a*2-1 ; i++)
        {
            printf("%c ",42);
        }
        printf("\n");
    }
    for(b=n-1 ; b>=1 ; b--)
    {
        for(y=1 ; y<=n-b ; y++)
        {
            printf("  ");
        }
        for(j=1 ; j<=b*2-1 ; j++)
        {
            printf("%c ",42);
        }
        printf("\n");
    }
}

