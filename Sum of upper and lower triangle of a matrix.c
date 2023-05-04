#include <stdio.h>

int r,c;

int main()
{
    int x,y,sum1,sum2;

    printf("Enter your row number: ");
    scanf("%d",&r);
    printf("Enter your column number: ");
    scanf("%d",&c);

    while(r!=c)
    {
        printf("\n\nError !!\a\aYour row and column number are not equal\n");
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
    printf("\n\nYour matrix is: \n\n");
    for(x=0 ; x<r ; x++)
    {
        for(y=0 ; y<c ; y++)
        {
            printf("\t%d",mat[x][y]);
            if(x<=y)
                sum1+=mat[x][y];
            if(x>=y)
                sum2+=mat[x][y];
        }
        printf("\n");
    }
    printf("\nSum of upper triangle is: %d",sum1);
    printf("\nSum of lower triangle is: %d\n",sum2);
}
