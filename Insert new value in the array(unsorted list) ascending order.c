#include <stdio.h>
int n;
int main()
{
    printf("Enter how many elements you want to store: ");
    scanf("%d",&n);
    int x,y,z,arr[n+1];
    printf("\nEnter your elements: \n\n");
    for(x=0 ; x<n ; x++)
    {
        printf("Element %d: ",x+1);
        scanf("%d",&arr[x]);
    }
    printf("\nEnter your new integer: ");
    scanf("%d",&y);

    printf("\nThe exist array list is: \n\n");
    for(x=0 ; x<n ; x++)
    {
        printf("%d ",arr[x]);
    }

    for(x=n ; x>=0 ; x--)
    {
        arr[x]=arr[x-1];
        if(y>arr[x])
        {
            arr[x]=y;
            break;
        }
    }
    for(x=0 ; x<n+1 ; x++)
    {
        for(y=0 ; y<n+1 ; y++)
        {
            if(arr[x]>arr[x+1])
            {
                z=arr[x];
                arr[x]=arr[x+1];
                arr[x+1]=z;
            }
        }
    }
    printf("\n\nAfter insert the list is: \n\n");
    for(x=0 ; x<n+1 ; x++)
    {
        printf("%d ",arr[x]);
    }
    printf("\n");
}

