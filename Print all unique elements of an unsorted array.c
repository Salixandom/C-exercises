#include <stdio.h>
int n;
int main()
{
    printf("Enter how many elements you want to store: ");
    scanf("%d",&n);
    int x,y,arr[n],flag[n];
    printf("\nEnter your array elements: \n\n");
    for(x=0 ; x<n ; x++)
    {
        printf("Element %d: ",x+1);
        scanf("%d",&arr[x]);
        flag[x]=2;
    }
    printf("\nThe given array is: ");
    for(x=0 ; x<n ; x++)
        printf("%d ",arr[x]);
    for(x=0 ; x<n ; x++)
    {
        for(y=x+1 ; y<n ; y++)
        {
            if(arr[x]==arr[y])
                flag[y]=0;
        }
    }
    printf("\n\nUnique elements in the given array are: ");
    for(x=0 ; x<n ; x++)
    {
        if(flag[x]!=0)
            printf("%d ",arr[x]);
    }
    printf("\n");
}
