#include <stdio.h>
int r,c;
int main()
{
    printf("Enter your row number: ");
    scanf("%d",&r);
    printf("Enter your column number: ");
    scanf("%d",&c);
    int x,y,mat[r][c],temp=0,count=0,a;
    printf("\nEnter your matrix elements: \n\n");
    for(x=0 ; x<r ; x++)
    {
        for(y=0 ; y<c ; y++)
        {
            printf("Element (%d,%d): ",x+1,y+1);
            scanf("%d",&mat[x][y]);
        }
    }
    printf("\nYour given matrix is: \n\n");
    for(x=0 ; x<r ; x++)
    {
        for(y=0 ; y<c ; y++)
        {
            printf("%d\t",mat[x][y]);
            if(mat[x][y]==1)
                count++;
            if(count>temp)
            {
                temp=count;
                a=x;
            }
        }
        count=0;
        printf("\n");
    }
    printf("\n\nThe index of row with maximum 1s is: %d\n",a+1);
}
