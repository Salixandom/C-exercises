#include <stdio.h>
int main()
{
    int n,r,x,i;
    printf("Enter your range number: ");
    scanf("%d",&n);
    printf("\n");
    for(r=n ; r>=1 ; r--)
    {
        for(x=1 ; x<=n-r ; x++)
        {
            printf("  ");
        }
        for(i=1 ; i<=r ; i++)
        {
            printf("%d ",i%2);
        }
        printf("\n");
    }
}
