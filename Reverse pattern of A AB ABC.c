#include <stdio.h>
int main()
{
    int n,x,i;
    printf("Enter your number of rows: ");
    scanf("%d",&n);
    for(x=n ; x>=1 ; x--)
    {
        for(i=1 ; i<=x ; i++)
            printf("%c ",64+i);
        printf("\n");
    }
}
