#include <stdio.h>
int main()
{
    int n,x,i,m=0;
    printf("Enter your row number: ");
    scanf("%d",&n);
    for(x=n ; x>=1 ; x--)
    {
        for(i=x ; i>=1 ; i--)
            printf("%c ",65+m);
        m++;
        printf("\n");
    }
}
