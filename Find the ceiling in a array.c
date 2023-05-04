#include <stdio.h>
int n;
int main()
{
    printf("Enter how many elements you want to store: ");
    scanf("%d",&n);
    int x,y,z,a,arr[n];
    printf("\nEnter your array elements: \n\n");
    for(x=0 ; x<n ; x++)
    {
        printf("Element %d: ",x+1);
        scanf("%d",&arr[x]);
    }
    printf("\nThe given array is: ");
    for(x=0 ; x<n ; x++)
        printf("%d ",arr[x]);
    printf("\n\nEnter the value whose ceiling you want to find: ");
    scanf("%d",&a);
    for(x=0 ; x<n ; x++)
    {
        for(y=0 ; y<n ; y++)
            if(arr[y-1]>arr[y])
            {
                z=arr[y-1];
                arr[y-1]=arr[y];
                arr[y]=z;
            }
    }
    for(x=0 ; x<n ; x++)
        if(a<arr[x] || a==arr[x])
        {
            printf("\nThe ceiling of %d is: %d",a,arr[x]);
            break;
        }
    if(x==n)
        printf("\nThere is no ceiling in the array.");
    printf("\n");
}
