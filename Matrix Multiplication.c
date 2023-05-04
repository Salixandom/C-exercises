#include <stdio.h>

int r1,r2,c1,c2;

void matrix(int n,int r,int c)
{
    int x,y,mat1[r][c],mat2[r][c];

}

int main()
{
    int x,y,z,sum=0;
    printf("Enter your row and column number of matrix 1: ");
    scanf("%d %d",&r1,&c1);
    printf("Enter your row and column number of matrix 2: ");
    scanf("%d %d",&r2,&c2);

    while(c1!=r2)
    {
        printf("\n\nError !!\a\a Your column number of matrix 1 is is not equal to row number of matrix 2\n");
        printf("Enter your row and column number of matrix 1: ");
        scanf("%d %d",&r1,&c1);
        printf("Enter your row and column number of matrix 2: ");
        scanf("%d %d",&r2,&c2);
    }

    int mat1[r1][c1],mat2[r2][c2],mat3[r1][c2];

    printf("Enter your elements of matrix 1:\n");
    for(x=0 ; x<r1 ; x++)
    {
        for(y=0 ; y<c1 ; y++)
        {
            printf("Element (%d,%d): ",x+1,y+1);
            scanf("%d",&mat1[x][y]);
        }
    }
    printf("\n\nMatrix 1: \n");
    for(x=0 ; x<r1 ; x++)
    {
        for(y=0 ; y<c1 ; y++)
        {
            printf("\t%3d",mat1[x][y]);
        }
        printf("\n");
    }
    printf("\n\n");

    printf("Enter your elements of matrix 2:\n");
    for(x=0 ; x<r2 ; x++)
    {
        for(y=0 ; y<c2 ; y++)
        {
            printf("Element (%d,%d): ",x+1,y+1);
            scanf("%d",&mat2[x][y]);
        }
    }
    printf("\n\nMatrix 2: \n");
    for(x=0 ; x<r2 ; x++)
    {
        for(y=0 ; y<c2 ; y++)
        {

            printf("\t%3d",mat2[x][y]);
        }
        printf("\n");
    }
    printf("\n\n");

    for(x=0 ; x<r1 ; x++)
    {
        for(y=0 ; y<c2 ; y++)
        {
            for(z=0 ; z<c1 ; z++)
                sum+=mat1[x][z]*mat2[z][y];
            mat3[x][y]=sum;
            sum=0;
        }
    }
    printf("\nMatrix 1 X Matrix 2: \n");
    for(x=0 ; x<r1 ; x++)
    {
        for(y=0 ; y<c2 ; y++)
            printf("\t%3d",mat3[x][y]);
        printf("\n");
    }
    printf("\n");
}
