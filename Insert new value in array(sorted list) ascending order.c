#include <stdio.h>
int n;
int main()
{
    printf("Enter how many elements you want to store: ");
    scanf("%d",&n);
    int x,y,arr1[n+1],arr2[n];
    printf("\nEnter your elements in ascending order: \n\n");
    for(x=0 ; x<n ; x++)
    {
        printf("Element %d: ",x+1);
        scanf("%d",&arr1[x]);
        arr2[x]=arr1[x];
    }
    printf("\nEnter your new integer: ");
    scanf("%d",&y);
    for(x=n ; x>=0 ; x--)
    {
        arr1[x]=arr1[x-1];
        if(y>arr1[x])
        {
            arr1[x]=y;
            break;
        }
    }
    printf("\nThe exist array list is: \n\n");
    for(x=0 ; x<n ; x++)
    {
        printf("%d ",arr2[x]);
    }
    printf("\n\nAfter insert the list is: \n\n");
    for(x=0 ; x<n+1 ; x++)
    {
        printf("%d ",arr1[x]);
    }
    printf("\n");
}
