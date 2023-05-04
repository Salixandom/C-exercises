#include <stdio.h>
int n;
int main()
{
    printf("Enter how many elements you want to store: ");
    scanf("%d",&n);
    int x,y,arr[n];
    printf("\nEnter your array elements: \n\n");
    for(x=0 ; x<n ; x++)
    {
        printf("Element %d: ",x+1);
        scanf("%d",&arr[x]);
    }
    printf("\nYour array elements are: ");
    for(x=0 ; x<n ; x++)
        printf("%d ",arr[x]);
    for(x=0 ; x<n ; x++)
    {
        for(y=x+1 ; y<n ; y++)
        {
            if(arr[y]>arr[x])
            {
                printf("\n\nNext bigger element of %d in the array is: %d",arr[x],arr[y]);
                break;
            }
        }
        if(y==n)
            printf("\n\nNext bigger element of %d in the array is: -1",arr[n-1]);
    }
}
