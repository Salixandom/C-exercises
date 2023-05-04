#include <stdio.h>
int n;
int main()
{
    printf("Enter how many elements you want to store: ");
    scanf("%d",&n);
    int x,y,z,arr[n];
    printf("\nEnter your elements: \n\n");
    for(x=0 ; x<n ; x++)
    {
        printf("Element %d: ",x+1);
        scanf("%d",&arr[x]);
    }
    for(x=0 ; x<n ; x++)
    {
        for(y=0 ; y<n ; y++)
        {
            if(arr[x]<arr[x+1])
            {
                z=arr[x+1];
                arr[x+1]=arr[x];
                arr[x]=z;
            }
        }
    }
    printf("\nElements of the array in sorted descending order: \n\n");
    for(x=0 ; x<n ; x++)
        printf("%d ",arr[x]);
    printf("\n");
}
