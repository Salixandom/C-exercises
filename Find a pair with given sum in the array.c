#include <stdio.h>
int n;
int main()
{
    printf("Enter how many numbers you want to store: ");
    scanf("%d",&n);
    int x,y,sum,arr[n];
    printf("\nEnter your array elements: \n\n");
    for(x=0 ; x<n ; x++)
    {
        printf("Element %d: ",x+1);
        scanf("%d",&arr[x]);
    }
    printf("\nEnter sum: ");
    scanf("%d",&sum);
    for(x=0 ; x<n ; x++)
    {
        for(y=x+1 ; y<n ; y++)
        {
            if(arr[x]+arr[y]==sum)
                printf("\n%d and %d sum up to %d\n",arr[x],arr[y],sum);
        }
    }
}
