#include <stdio.h>
int n;
int main()
{
    printf("Enter how many elements you want to store: ");
    scanf("%d",&n);
    int x,y,j,arr[n];
    printf("Enter your elements: \n");
    for(x=0 ; x<n ; x++)
    {
        printf("Element %d: ",x+1);
        scanf("%d",&arr[x]);
    }
    for(x=0 ; x<n ; x++)
    {
        for(y=0 ; y<n ; y++)
        {
            if(arr[x]>arr[x+1])
            {
                j=arr[x];
                arr[x]=arr[x+1];
                arr[x+1]=j;
            }
        }
    }
    printf("\nElements of array in sorted ascending order: \n\n");
    for(x=0 ; x<n ; x++)
        printf("%d ",arr[x]);
    printf("\n");
}
