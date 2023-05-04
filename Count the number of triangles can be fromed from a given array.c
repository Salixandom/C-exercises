#include <stdio.h>
int n;
int main()
{
    printf("Enter how many elements you want to store: ");
    scanf("%d",&n);
    int x,y,arr[n],count=0;
    printf("\nEnter your array elements: \n\n");
    for(x=0 ; x<n ; x++)
    {
        printf("Element %d: ",x+1);
        scanf("%d",&arr[x]);
    }
    printf("\nYour given array is: ");
    for(x=0 ; x<n ; x++)
        printf("%d ",arr[x]);
    for(x=0 ; x<n-2 ; x++)
    {
        for(y=x+2 ; y<n ; y++)
        {
            if(arr[x]+arr[x+1]>arr[y])
                count++;
        }
    }
    printf("\n\nNumber of possible triangles can be formed from the array is: %d\n",count);
}
