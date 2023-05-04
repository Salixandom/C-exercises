#include <stdio.h>
int main()
{
    int x,i,n;
    printf("Enter your n : ");
    scanf("%d",&n);
    for(x=1 ; x<=n ; x++)
    {
        for(i=1 ; i<=x ; i++)
            printf("%d ",x);
    }
}
