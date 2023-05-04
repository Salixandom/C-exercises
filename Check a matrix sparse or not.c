#include <stdio.h>
int main()
{
    int r,c,x,y,count=0;
    printf("Enter your row number: ");
    scanf("%d",&r);
    printf("Enter your column number: ");
    scanf("%d",&c);
    int mat[r][c];
    printf("\nEnter your matrix elements: \n\n");
    for(x=0 ; x<r ; x++)
    {
        for(y=0 ; y<c ; y++)
        {
            printf("Element (%d,%d): ",x+1,y+1);
            scanf("%d",&mat[x][y]);
            if(mat[x][y]==0)
                count++;
        }
    }
    printf("\nYour matrix is: \n\n");
    for(x=0 ; x<r ; x++)
    {
        for(y=0 ; y<c ; y++)
            printf("%d\t",mat[x][y]);
        printf("\n");
    }
    if(count>(r*c)/2)
        printf("\nYour matrix is a Sparse matrix\n");
    else
        printf("\nYour matrix is not a Sparse matrix\n");
}
