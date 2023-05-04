#include <stdio.h>
int n;
int main()
{
    printf("Enter how many elements you want to store: ");
    scanf("%d",&n);
    int x,y,arr[n],count=1;
    printf("\nEnter your array elements: \n\n");
    for(x=0 ; x<n ; x++)
    {
        printf("Element %d: ",x+1);
        scanf("%d",&arr[x]);
    }
    for(x=0 ; x<n ; x++)
    {
        for(y=x+1 ; y<n ; y++)
            if(arr[x]==arr[y])
                count++;
        if(count>n/2)
            printf("\n%d is a majority element\n",arr[x]);
        count=1;
    }
    if(x==n)
        printf("\nThere is no majority element in the array\n");
}
