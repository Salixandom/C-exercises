#include <stdio.h>
int n;
int main()
{
    printf("Enter how many numbers you want to store: ");
    scanf("%d",&n);
    int x,y,arr[n];
    printf("\nEnter your array elements: \n\n");
    for(x=0 ; x<n ; x++)
    {
        printf("Element %d: ",x+1);
        scanf("%d",&arr[x]);
    }
    printf("The given array is: ");
    for(x=0 ; x<n ; x++)
    {
        printf("%d ",arr[x]);
    }
    int temp=0,a,b,diff;
    for(x=0 ; x<n-1 ; x++)
    {
        for(y=x+1 ; y<n ; y++)
        {
            if(arr[y]>arr[x])
            {
                diff=arr[y]-arr[x];
                if(diff>temp)
                {
                    temp=diff;
                    a=arr[x];
                    b=arr[y];
                }
            }
        }
    }
    printf("\n\nThe elements which provide maximum difference is: %d,%d\n",a,b);
    printf("The Maximum difference between two elements in the array is: %d\n",temp);
}
