#include <stdio.h>
int n;

int main()
{
    printf("Enter how many elements you want to store: ");
    scanf("%d",&n);
    int x,y,arr[n],max;
    printf("\nEnter your array elements: \n\n");
    for(x=0 ; x<n ; x++)
    {
        printf("Element %d: ",x+1);
        scanf("%d",&arr[x]);
    }
    printf("\nThe given array is: ");
    for(x=0 ; x<n ; x++)
        printf("%d ",arr[x]);
    max=arr[0];
    for(x=0 ; x<n-1 ; x++)
    {
        if(max<arr[x] && arr[x]>arr[x+1])
        {
            max=arr[x];
        }
    }
    printf("\n\nThe maximum element which is increasing then decreasing is: %d\n",max);
}
