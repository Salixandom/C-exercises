#include <stdio.h>
int main()
{
    int n,m,a,b,x,y,i,j;
    printf("Enter your maximum number: ");
    scanf("%d",&n);
    printf("\n");
    m=n-1;
    for(a=1 ; a<=n ; a++)
    {
        for(x=1 ; x<=n-a ; x++)
        {
            printf("  ");
        }
        for(i=1 ; i<=a ; i++)
        {
            printf("%d ",i);
        }
        printf("\n");
    }
    for(b=m ; b>=1 ; b--)
    {
        for(y=1 ; y<=n-b ; y++)
        {
            printf("  ");
        }
        for(j=1 ; j<=b ; j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
}
