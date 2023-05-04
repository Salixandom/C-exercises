#include <stdio.h>
int main()
{
    int n,m,x,i;
    printf("Enter your n : ");
    scanf("%d",&n);
    printf("Enter your range : ");
    scanf("%d",&m);
    printf("\n");
    for(i=1 ; i<=n ; i++)
    {
        for(x=1 ; x<=m ; x++)
        {
            printf("%d X %d = %d\n",i,x,i*x);
        }
        printf("\n");
    }
}
