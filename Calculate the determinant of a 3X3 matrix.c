#include <stdio.h>
int main()
{
    int x,y,arr[3][3],det=0;
    printf("Enter your array elements: \n\n");
    for(x=0 ; x<3 ; x++)
    {
        for(y=0 ; y<3 ; y++)
        {
            printf("Element (%d,%d): ",x+1,y+1);
            scanf("%d",&arr[x][y]);
        }
    }
    printf("\nYour matrix is:\n\n");
    for(x=0 ; x<3 ; x++)
    {
        for(y=0 ; y<3 ; y++)
            printf("%d\t",arr[x][y]);
        printf("\n");
    }
    for(x=0 ; x<3 ; x++)
        det+=arr[0][x]*(arr[1][(x+1)%3]*arr[1][(x+2)%3]-arr[1][(x+2)%3]*arr[1][(x+1)%3]);
    printf("\nDeterminant of your matrix: %d\n",det);
}
