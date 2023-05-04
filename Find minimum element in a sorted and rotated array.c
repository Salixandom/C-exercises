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
    printf("\nThe given array is: ");
    for(x=0 ; x<n ; x++)
        printf("%d ",arr[x]);
    y=arr[0];
    for(x=0 ; x<n ; x++)
        if(y>arr[x])
        y=arr[x];
    printf("\n\nThe minimum element in the above array is: %d\n",y);
}
