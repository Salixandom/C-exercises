#include <stdio.h>
int n;
int main()
{
    printf("Enter your matrix size (n X n): ");
    scanf("%d",&n);
    int x,y,z,mat[n][n];
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
            printf("%3d\t",mat[x][y]);
        printf("\n");
    }
    int m=n-1;
    printf("\nAfter interchanging diagonals: \n\n");
    for(x=0 ; x<n ; x++)
    {
        for(y=0 ; y<n ; y++)
        {
            if(x==y)
            {
                z=mat[x][y];
                mat[x][y]=mat[m-x][y];
                mat[m-x][y]=z;
            }
        }
    }
    for(x=0 ; x<n ; x++)
    {
        for(y=0 ; y<n ; y++)
            printf("%3d\t",mat[x][y]);
        printf("\n");
    }
}
