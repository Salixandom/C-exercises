#include <stdio.h>
int main()
{
    int n,x,i;
    printf("Enter your limit: ");
    scanf("%d",&n);
    for(i=1 ; i<=n ; i++)
    {
        for(x=1 ; x<=i ;x++)
        {
            printf("%d ",x);
        }
        printf("\n");
    }
}
