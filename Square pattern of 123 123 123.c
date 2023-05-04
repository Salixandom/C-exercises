#include <stdio.h>
int main()
{
    int n,x,i;
    printf("Enter your range: ");
    scanf("%d",&n);
    printf("\n");
    for(x=1 ; x<=n ; x++)
    {
        for(i=1 ; i<=n ; i++)
            printf("%d ",i);
        printf("\n");
    }
}
