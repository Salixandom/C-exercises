#include <stdio.h>
int n;
int main()
{
    printf("Enter how many elements you want to store: ");
    scanf("%d",&n);
    int x,y,arr[n],a=0;
    printf("\nEnter your array elements: \n\n");
    for(x=0 ; x<n ; x++)
    {
        printf("Element %d: ",x+1);
        scanf("%d",&arr[x]);
    }
    printf("\nThe given array is: ");
    for(x=0 ; x<n ; x++)
        printf("%d ",arr[x]);
    for(x=n-1 ; x>=0 ; x--)
    {
        if(arr[x]==0)
        {
            y=arr[x];
            arr[x]=arr[n-1-a];
            arr[n-1-a]=y;
            a++;
        }
    }
    printf("\n\nThe new array is: ");
    for(x=0 ; x<n ; x++)
        printf("%d ",arr[x]);
    printf("\n");
}
