#include <stdio.h>
int main()
{
    int n,m=1,x,i,r;
    printf("Enter your row number: "); //Don't input more than 5
    scanf("%d",&n);
    printf("\n");
    for(x=n ; x>=1 ; x--)
    {
        for(r=x-1 ; r>=1 ; r--)
        {
            printf("  ");
        }
        for(i=1 ; i<=m ; i++)
            printf("%d ",i);
        printf("\n");
        m+=2;
    }
}
