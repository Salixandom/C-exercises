#include <stdio.h>
int n;
int main()
{
    printf("Enter how many elements you want to store: ");
    scanf("%d",&n);
    int x,y,arr[n];
    printf("\nEnter your elements: \n\n");
    for(x=0 ; x<n ; x++)
    {
        printf("Element %d: ",x+1);
        scanf("%d",&arr[x]);
    }
    x=0;
    printf("\nThe missing numbers are: ");
    for(y=1 ; y<arr[n-1] ; y++)
    {
        for(x=0 ; x<n ; x++)
        {
            if(arr[x]==y)
                break;
        }
        if(x==n)
            printf("%d ",y);
    }
    printf("\n");
}
