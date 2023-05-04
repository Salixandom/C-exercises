#include <stdio.h>
int main()
{
    int n,m=1,r,c;
    printf("Enter your row number: ");
    scanf("%d",&n);
    printf("\n");
    for(r=1 ; r<=n ; r++)
    {
        for(c=1 ; c<=r ; c++,m++)
            printf("%2d ",m);
        printf("\n");
    }
}
