#include <stdio.h>

int r,c;

int main()
{
    int a,b;
    printf("Enter your row number: ");
    scanf("%d",&r);
    printf("Enter your column number: ");
    scanf("%d",&c);
    int x[r][c];
    for(a=0 ; a<r ; a++)
    {
        for(b=0 ; b<c ; b++)
        {
            printf("Element(%d,%d): ",a+1,b+1);
            scanf("%d",&x[a][b]);
        }
    }
    printf("\n\n");
    printf("Your matrix is: \n\n");
    for(a=0 ; a<r ; a++)
    {
        printf("|");
        for(b=0 ; b<c ; b++)
            printf("%3d\t",x[a][b]);
        printf("|\n");
    }
    printf("\n");
}
