#include <stdio.h>
int main()
{
    int n,x,i,a;
    printf("Enter your range number: ");
    scanf("%d",&n);
    printf("\n");
    for(x=n ; x>=1 ; x--)
    {
        for(a=1 ; a<=n-x ; a++)
            printf("  ");
        for(i=1 ; i<=x ; i++)
            printf("%d ",i);
        printf("\n");
    }
}
