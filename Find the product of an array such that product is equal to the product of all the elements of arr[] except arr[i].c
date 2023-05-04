#include <stdio.h>
int n;
int main()
{
    printf("Enter how many elements you want to store: ");
    scanf("%d",&n);
    int x,y,arr[n],z=1;
    printf("\nEnter your elements: \n\n");
    for(x=0 ; x<n ; x++)
    {
        printf("Element %d: ",x+1);
        scanf("%d",&arr[x]);
    }
    printf("\nYour given array is: ");
    for(x=0 ; x<n ; x++)
        printf("%d ",arr[x]);
    printf("\n\nThe product array is: ");
    for(x=0 ; x<n ; x++)
    {
        for(y=0 ; y<n ; y++)
        {
            if(x==y)
                continue;
            z*=arr[y];
        }
        printf("%d ",z);
        z=1;
    }
    printf("\n");
}
