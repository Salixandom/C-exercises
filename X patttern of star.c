#include <stdio.h>
int main()
{
    int n,r,c;
    printf("Enter your row number: ");
    scanf("%d",&n);
    printf("\n");
    for(r=1 ; r<=n ; r++)
    {
        for(c=1 ; c<=n ; c++)
        {
            if(r==c||r+c==n+1||r==ceil(n/2)||c==ceil(n/2))
                printf("%c ",42);
            else
                printf("  ");
        }
        printf("\n");
    }
}
