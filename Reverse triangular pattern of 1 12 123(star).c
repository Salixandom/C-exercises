#include <stdio.h>
int main()
{
    int n,x,a,i;
    printf("Enter your row number: ");
    scanf("%d",&n);
    printf("\n");
    for(x=n ; x>=1 ; x--)
    {
        for(i=1 ; i<=n-x ; i++)
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
}
