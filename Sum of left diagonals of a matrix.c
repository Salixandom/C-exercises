#include <stdio.h>
int n,r,c;
int main()
{
    printf("Enter your size of matrix(n X n): ");
    scanf("%d",&n);
    r=c=n;
    int mat[r][c],x,y,sum=0;
    printf("\nEnter your matrix elements: \n\n");
    for(x=0 ; x<n ; x++)
    {
        for(y=0 ; y<n ; y++)
        {
            printf("Element (%d,%d): ",x+1,y+1);
            scanf("%d",&mat[x][y]);
        }
    }
    printf("\n\nYour matrix is: \n\n");
    for(x=0 ; x<n ; x++)
    {
        for(y=0 ; y<n ; y++)
            {
                printf("%3d\t",mat[x][y]);
                if(x+y==n-1)
                    sum+=mat[x][y];
            }
        printf("\n");
    }
    printf("\n\nAddition of the left Diagonal elements is: %d\n\n",sum);
}

