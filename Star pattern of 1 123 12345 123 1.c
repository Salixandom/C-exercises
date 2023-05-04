#include <stdio.h>
int main()
{
    int x,y,a,b,i,j;
    printf("Press any key");
    getchar();
    printf("\n");
    for(a=1 ; a<=3 ; a++)
    {
        for(x=1 ; x<=3-a ; x++)
        {
            printf("  ");
        }
        for(i=1 ; i<=a*2-1 ; i++)
        {
            printf("%d ",i);
        }
        printf("\n");
    }
    for(b=3-1 ; b>=1 ; b--)
    {
        for(y=1 ; y<=3-b ; y++)
        {
            printf("  ");
        }
        for(j=1 ; j<=b*2-1 ; j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
}
