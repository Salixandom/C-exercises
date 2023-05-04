#include <stdio.h>
int r,c;
int main()
{
    printf("Enter your row number: ");
    scanf("%d",&r);
    printf("Enter your column number: ");
    scanf("%d",&c);
    int x,y,mat[r][c],n,count=0 ;
    printf("\nEnter your matrix elements: \n\n");
    for(x=0 ; x<r ; x++)
    {
        for(y=0 ; y<c ; y++)
        {
            printf("Element (%d,%d): ",x+1,y+1);
            scanf("%d",&mat[x][y]);
        }
    }
    printf("\nThe given matrix is: \n\n");
    for(x=0 ; x<r ; x++)
    {
        for(y=0 ; y<c ; y++)
            printf("%d\t",mat[x][y]);
        printf("\n");
    }
    printf("\nThe given value for searching is: ");
    scanf("%d",&n);
    for(x=0 ; x<r ; x++)
    {
        for(y=0 ; y<c ; y++)
        {
            if(mat[x][y]==n)
            {
                printf("\nThe element Found at the position in the matrix is: %d,%d\n",x+1,y+1);
                count++;
                break;
            }
            if(count==1)
                break;
        }
    }
    if(x==r)
        printf("\nThe element is not found in the matrix\n");
}

