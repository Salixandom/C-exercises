#include <stdio.h>
int main()
{
    int n,x,i,c;
    printf("Enter your row number: ");  //Don't input more than 5
    scanf("%d",&n);
    printf("\n");
    for(x=n ; x>=1 ; x--)
    {
        for(i=1 ; i<=n-x ; i++)
        {
            printf("  ");
        }
        for(c=1 ; c<=x*2-1 ; c++)
        {
            printf("%d ",c);
        }
        printf("\n");
    }
}
