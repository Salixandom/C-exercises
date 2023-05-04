#include <stdio.h>

int r,c;

int main()
{
    int x,y;
    printf("Enter how your row and column number: ");
    scanf("%d %d",&r,&c);
    int mat[r][c];
    printf("\nEnter your matrix elements: \n\n");
    for(x=0 ; x<r ; x++)
    {
        for(y=0 ; y<c ; y++)
        {
            printf("Element (%d,%d): ",x+1,y+1);
            scanf("%d",&mat[x][y]);
        }
    }
    printf("\n\nYour Matrix is: \n\n");
    for(x=0 ; x<r ; x++)
    {
        for(y=0 ; y<c ; y++)
            printf("\t%3d",mat[x][y]);
        printf("\n");
    }
    printf("\n\nYour Transpose matrix is: \n\n");
    for(y=0 ; y<c ; y++)
    {
        for(x=0 ; x<r ; x++)
            printf("\t%d",mat[x][y]);
        printf("\n");
    }
    printf("\n\n");
}
