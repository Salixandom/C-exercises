#include <stdio.h>
int n;
int main()
{
    printf("Enter your matrix size(n X n): ");
    scanf("%d",&n);
    int arr[n][n],x,y,sum1=0,sum2=0;
    printf("\nEnter your matrix elements: \n\n");
    for(x=0 ; x<n ; x++)
    {
        for(y=0 ; y<n ; y++)
        {
            printf("Element %d: ",x+1,y+1);
            scanf("%d",&arr[x][y]);
        }
    }
    printf("\nYour matrix is: \n\n");
    for(x=0 ; x<n ; x++)
    {
        for(y=0 ; y<n ; y++)
        {
            printf("%d\t",arr[x][y]);
        }
        printf("\n");
    }
    printf("\nYour result: \n\n");
    for(x=0 ; x<n ; x++)
    {
        for(y=0 ; y<n ; y++)
        {
            printf("%d\t",arr[x][y]);
            sum1+=arr[x][y];
        }
        printf("\t%d\n",sum1);
        sum1=0;
    }
    printf("\n\n");
    for(y=0 ; y<n ; y++)
    {
        for(x=0 ; x<n ; x++)
            sum2+=arr[x][y];
        printf("%d\t",sum2);
        sum2=0;
    }
}
