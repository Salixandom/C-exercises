#include <stdio.h>
int n;
int main()
{
    printf("Enter your matrix size(n X n): ");
    scanf("%d",&n);
    int x,y,mat[n][n],count=0;
    printf("\nEnter your matrix elements: \n\n");
    for(x=0 ; x<n ; x++)
    {
        for(y=0 ; y<n ; y++)
        {
            printf("Element (%d,%d): ",x+1,y+1);
            scanf("%d",&mat[x][y]);
        }
    }
    printf("\nYour matrix is: \n\n");
    for(x=0 ; x<n ; x++)
    {
        for(y=0 ; y<n ; y++)
        {
            printf("%d\t",mat[x][y]);
            if(x==y && mat[x][y]==1)
                count++;
            if(x!=y && mat[x][y]==0)
                count++;
        }
        printf("\n");
    }
    if(count==n*n)
        printf("\nYour matrix is an Identity matrix\n");
    else
        printf("\nYour matrix is not an Identity matrix\n");
}
