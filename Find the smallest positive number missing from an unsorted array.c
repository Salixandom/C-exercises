#include <stdio.h>
int n;
int main()
{
    printf("Enter how many elements you want to store: ");
    scanf("%d",&n);
    int x,y,z,count=0,arr[n];
    printf("\nEnter your array elements: \n\n");
    for(x=0 ; x<n ; x++)
    {
        printf("Element %d: ",x+1);
        scanf("%d",&arr[x]);
    }
    printf("\nYour given array is: ");
    for(x=0 ; x<n ; x++)
        printf("%d ",arr[x]);
    for(x=0 ; x<n ; x++)
    {
        for(y=0 ; y<n ; y++)
        {
            if(arr[y-1]>arr[y])
            {
                z=arr[y-1];
                arr[y-1]=arr[y];
                arr[y]=z;
            }
        }
    }
    for(z=1 ; z<=arr[n-1] ; z++)
    {
        for(x=0 ; x<n ; x++)
            if(z!=arr[x])
            {
                count++;
            }
        if(count==n)
        {
            printf("\n\nThe smallest positive number missed is: %d",z);
            break;
        }
        count=0;
    }
}
