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
            if(r==1||r==n||c==1||c==n)
                printf("%c ",42);
            else
                printf("  ");
        }
        printf("\n");
    }
}
