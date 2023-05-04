#include <stdio.h>
int main()
{
    int n,m,a;
    printf("Enter your range number: ");
    scanf("%d",&n);
    printf("\n");
    for(a=1 ; a<=n ; a++)
    {
        for(m=1 ; m<=a ; m++)
        {
            printf("%d ",a*m);
        }
        printf("\n");
    }
}
