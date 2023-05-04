#include <stdio.h>
int main()
{
    int n,x,i,a;
    printf("Enter your row number: ");
    scanf("%d",&n);
    printf("\n");
    for(x=1 ; x<=n ; x++)
    {
        for(i=1 ; i<=n-x ; i++)
        {
            printf("  ");
        }
        for(a=1 ; a<=x ; a++)
        {
            printf("%d ",a%2);
        }
        printf("\n");
    }
}
