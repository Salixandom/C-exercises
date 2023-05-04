#include <stdio.h>
int main()
{
    int n,x,i;
    printf("Enter your row number: ");
    scanf("%d",&n);
    for(x=1 ; x<=n ; x++)
    {
        for(i=1 ; i<=x ; i++)
            printf("%c ",42);
        printf("\n");
    }
}
