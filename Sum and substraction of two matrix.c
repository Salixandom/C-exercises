#include <stdio.h>

int a,b,x,y,i,j;

int main()
{
    printf("Enter your row number of matrix 1: ");
    scanf("%d",&a);
    printf("Enter your column number of matrix 2: ");
    scanf("%d",&b);
    printf("\nEnter your row number of matrix 2: ");
    scanf("%d",&x);
    printf("Enter your column number of matrix 2: ");
    scanf("%d",&y);
    if(a==x && b==y)
    {
        int mat1[a][b],mat2[x][y],mat3[a][b],mat4[x][y];
        printf("\n\nEnter Matrix 1 elements: \n\n");
        for(i=0 ; i<a ; i++)
        {
            for(j=0 ; j<b ; j++)
            {
                printf("Element (%d,%d): ",i+1,j+1);
                scanf("%d",&mat1[i][j]);
            }
        }
        printf("\n\nMatrix 1: \n");
        for(i=0 ; i<a ; i++)
        {
            for(j=0 ; j<b ; j++)
            {
                printf("\t%4d",mat1[i][j]);
            }
            printf("\n");
        }
        printf("\n\nEnter Matrix 2 elements: \n\n");
        for(i=0 ; i<x ; i++)
        {
            for(j=0 ; j<y ; j++)
            {
                printf("Element (%d,%d): ",i+1,j+1);
                scanf("%d",&mat2[i][j]);
            }
        }
        printf("\n\nMatrix 2: \n");
        for(i=0 ; i<x ; i++)
        {
            for(j=0 ; j<y ; j++)
            {
                printf("\t%4d",mat2[i][j]);
            }
            printf("\n");
        }
        printf("\n\nMatrix1 + Matrix2 : \n\n");
        for(i=0 ; i<a ; i++)
        {
            for(j=0 ; j<b ; j++)
            {
                mat3[i][j]=mat1[i][j]+mat2[i][j];
                printf("\t%3d",mat3[i][j]);
            }
            printf("\n");
        }
        printf("\n\nMatrix1 - Matrix2 : \n\n");
        for(i=0 ; i<a ; i++)
        {
            for(j=0 ; j<b ; j++)
            {
                mat4[i][j]=mat1[i][j]-mat2[i][j];
                printf("\t%3d",mat4[i][j]);
            }
            printf("\n");
        }
        printf("\n\n");
    }
    else
        printf("\nYour matrix dimensions are not equal\n");
}
