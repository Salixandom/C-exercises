#include <stdio.h>

int r,c;

int main()
{
    int x,y,sum=0;

    printf("Enter your row number: ");
    scanf("%d",&r);
    printf("Enter your column number: ");
    scanf("%d",&c);

    while(r!=c)
    {
        printf("\nError !!\a\aYour row and column number are not equal\n\n");
        printf("Enter your row number: ");
        scanf("%d",&r);
        printf("Enter your column number: ");
        scanf("%d",&c);
    }

    int mat[r][c];

    printf("\nEnter your matrix elements: \n");
    for(x=0 ; x<r ; x++)
    {
        for(y=0 ; y<c ; y++)
        {
            printf("Element (%d,%d): ",x+1,y+1);
            scanf("%d",&mat[x][y]);
        }
    }
    printf("\n\nYour matrix is: \n");
    for(x=0 ; x<r ; x++)
    {
        for(y=0 ; y<c ; y++)
        {
            printf("\t%3d",mat[x][y]);
            if(x==y)
                sum+=mat[x][y];
        }
        printf("\n");
    }
    printf("\n\nSum of Diagonal elements is: %d\n",sum);
}
