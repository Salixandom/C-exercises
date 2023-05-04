#include <stdio.h>
int main()
{
    int x,i,n;
    printf("Enter your number of row: ");
    scanf("%d",&n);
    for(x=n ; x>=1 ; x--)
    {
        for(i=1 ; i<=x ; i++)
            printf("%d ",i%2);
        printf("\n");
    }
}
