#include <stdio.h>
int main()
{
    int n,x,r,i;
    printf("Enter your range: ");
    scanf("%d",&n);
    printf("\n");
    for(x=1 ; x<=n ; x++)
    {
        for(r=n-x ; r>=1 ; r--)
        {
            printf("  ");
        }
        for(i=1 ; i<=x*2-1 ; i++)
        {
            if(i%2==0)
                printf("  ");
            else
                printf("%c ",42);
        }
        printf("\n");
    }
}
