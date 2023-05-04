#include <stdio.h>
int n;
int main()
{
    printf("Enter your size of array: ");
    scanf("%d",&n);
    int arr1[n],arr2[n],x,y,j,arr3[n*2];
    printf("\nEnter your array 1 elements: \n");
    for(x=0 ; x<n ; x++)
    {
        printf("Element %d: ",x+1);
        scanf("%d",&arr1[x]);
    }
    printf("\n\nEnter your array 2 elements: \n");
    for(x=0 ; x<n ; x++)
    {
        printf("Element %d: ",x+1);
        scanf("%d",&arr2[x]);
    }
    for(x=0 ; x<n ; x++)
    {
        arr3[x]=arr1[x];
        arr3[x+n]=arr2[x];
    }
    for(x=0 ; x<(n*2) ; x++)
    {
        for(y=0 ; y<(n*2)-1 ; y++)
        {
            if(arr3[y]<arr3[y+1])
            {
                j=arr3[y+1];
                arr3[y+1]=arr3[y];
                arr3[y]=j;
            }
        }
    }
    printf("\n");
    for(x=0 ; x<n*2 ; x++)
        printf("%d ",arr3[x]);
    printf("\n");
}
