#include <stdio.h>
int n;
int main()
{
    printf("Enter your size of two arrays: ");
    scanf("%d",&n);
    int x,y,z,arr1[n],arr2[n],arr3[n*2];
    printf("\nEnter your first array elements: \n\n");
    for(x=0 ; x<n ; x++)
    {
        printf("Element %d: ",x+1);
        scanf("%d",&arr1[x]);
    }
    printf("\nEnter your second array elements: \n\n");
    for(x=0 ; x<n ; x++)
    {
        printf("Element %d: ",x+1);
        scanf("%d",&arr2[x]);
    }
    printf("\nThe first array is: ");
    for(x=0 ; x<n ; x++)
        printf("%d ",arr1[x]);
    printf("\n\nThe second array is: ");
    for(x=0 ; x<n ; x++)
        printf("%d ",arr2[x]);
    for(x=0 ; x<n ; x++)
    {
        arr3[x]=arr1[x];
        arr3[x+n]=arr2[x];
    }
    for(x=0 ; x<n*2 ; x++)
    {
        for(y=0 ; y<n*2 ; y++)
            if(arr3[y-1]>arr3[y])
        {
            z=arr3[y-1];
            arr3[y-1]=arr3[y];
            arr3[y]=z;
        }
    }
    printf("\n\nThe Median of the 2 sorted arrays is: %d\n",(arr3[n-1]+arr3[n])/2);
}
