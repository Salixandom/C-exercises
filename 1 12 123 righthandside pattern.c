#include <stdio.h>
int main()
{
    int n,x,i,a,m;
    printf("Enter your row number: ");
    scanf("%d",&n);
    m=n-1;
    for(x=1 ; x<=n ; x++)
    {
        for(i=m ; i>=1 ; i--)
        {
            printf("  ");
        }
        for(a=1 ; a<=x ; a++)
        {
            printf("%d ",a);
        }
        printf("\n");
        m--;
    }
}
