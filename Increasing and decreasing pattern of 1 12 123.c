#include <stdio.h>
int main()
{
    int n,x,i;
    printf("Enter your maximum number: ");
    scanf("%d",&n);
    for(x=1 ; x<=n ; x++)
    {
        for(i=1 ; i<=x ; i++)
            printf("%d ",i);
        printf("\n");
    }
    for(x=(n-1) ; x>=1 ; x--)
    {
        for(i=1 ; i<=x ; i++)
            printf("%d ",i);
        printf("\n");
    }
}
