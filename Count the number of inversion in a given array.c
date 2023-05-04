#include <stdio.h>
int n;
int main()
{
    printf("Enter how many elements you want to store: ");
    scanf("%d",&n);
    int x,y,arr[n];
    printf("\nEnter your elements: \n\n");
    for(x=0 ; x<n ; x++)
    {
        printf("Element %d: ",x+1);
        scanf("%d",&arr[x]);
    }
    printf("\nThe given array is: ");
    for(x=0 ; x<n ; x++)
        printf("%d ",arr[x]);
    printf("\n\nThe inversions are: ");
    for(x=0 ; x<n-1 ; x++)
    {
        for(y=x+1 ; y<n ; y++)
        {
            if(arr[x]>arr[y])
                printf("(%d,%d) ",arr[x],arr[y]);
        }
    }
    printf("\n");
}
