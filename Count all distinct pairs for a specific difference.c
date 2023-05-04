#include <stdio.h>
#include <math.h>
int n;
int main()
{
    printf("Enter how many elements you want to store: ");
    scanf("%d",&n);
    int x,y,diff,arr[n],count=0;
    printf("\nEnter your array elements: \n\n");
    for(x=0 ; x<n ; x++)
    {
        printf("Elmenet %d: ",x+1);
        scanf("%d",&arr[x]);
    }
    printf("\nThe given array is: ");
    for(x=0 ; x<n ; x++)
        printf("%d ",arr[x]);
    printf("\n\nDifference: ");
    scanf("%d",&diff);
    printf("The distinct pairs for difference %d are: \n",diff);
    for(x=0 ; x<n-1 ; x++)
    {
        for(y=x+1 ; y<n ; y++)
        {
            if(abs(arr[x]-arr[y])==diff)
            {
                printf("[%d,%d]",arr[x],arr[y]);
                count++;
            }
        }
    }
    printf("\n\nNumber of distinct pairs for difference %d is: %d\n",diff,count);
}
