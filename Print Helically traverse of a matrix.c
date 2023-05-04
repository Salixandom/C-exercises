#include <stdio.h>

int n,r,c;

int main()
{
    printf("Enter your size of square matrix(n X n): ");
    scanf("%d",&n);
    r=c=n;

    int x,y,mat[r][c],row=0;

    printf("\nEnter your matrix elements: \n\n");
    for(x=0 ; x<r ; x++)
    {
        for(y=0 ; y<c ; y++)
        {
            printf("Element (%d,%d): ",x+1,y+1);
            scanf("%d",&mat[x][y]);
        }
    }
    printf("\nYour matrix is: \n\n");
    for(x=0 ; x<r ; x++)
    {
        for(y=0 ; y<c ; y++)
            printf("\t%d",mat[x][y]);
        printf("\n");
    }
    printf("\n\nHelically traverse form is: \n\n");
    while(n>=0)
    {
        for(x=row ; x<n ; x++)
            printf("%d ",mat[row][x]);
        for(x=row+1 ; x<n ; x++)
            printf("%d ",mat[x][n-1]);
        for(x=n-2 ; x>=row ; x--)
            printf("%d ",mat[n-1][x]);
        for(x=n-2 ; x>row ; x--)
            printf("%d ",mat[x][row]);
        n--;
        row++;
    }
    printf("\n");
}
