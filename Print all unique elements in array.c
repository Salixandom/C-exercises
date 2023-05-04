#include <stdio.h>

int n;

int main()
{
    printf("Enter how many elements you want to input: ");
    scanf("%d",&n);
    int arr[n],x,y,count=0;
    printf("\nEnter your elements: \n\n");
    for(x=0 ; x<n ; x++)
    {
        printf("Element %d: ",x+1);
        scanf("%d",&arr[x]);
    }

    printf("\nUnique elements are: \n");
    for(x=0 ; x<n ; x++)
    {
        for(y=0 ; y<n ; y++)
            if(arr[x]!=arr[y])
            {
                count++;
            }
            if(count==n-1)
                printf("%d ",arr[x]);
            count=0;
    }
    printf("\n");
}
