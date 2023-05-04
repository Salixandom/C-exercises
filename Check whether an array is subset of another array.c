#include <stdio.h>
int n,m;
int main()
{
    printf("Enter your first array size: ");
    scanf("%d",&n);
    printf("Enter your second array size: ");
    scanf("%d",&m);
    int x,y,arr1[n],arr2[m],count=0;
    printf("\nEnter your first array elements: \n\n");
    for(x=0 ; x<n ; x++)
    {
        printf("Element %d: ",x+1);
        scanf("%d",&arr1[x]);
    }
    printf("\nEnter your second array elements: \n\n");
    for(x=0 ; x<m ; x++)
    {
        printf("Element %d: ",x+1);
        scanf("%d",&arr2[x]);
    }
    printf("\nThe given first array is: ");
    for(x=0 ; x<n ; x++)
        printf("%d ",arr1[x]);
    printf("\n\nThe given second array is: ");
    for(x=0 ; x<m ; x++)
        printf("%d ",arr2[x]);
    if(n>m)
    {
        for(x=0 ; x<m ; x++)
        {
            for(y=0 ; y<n ; y++)
                if(arr1[y]==arr2[x])
                {
                    count++;
                    break;
                }
        }
        if(count==m)
            printf("\n\nThe second array is the subset of first array");
        else
            printf("\n\nThe second array is not the subset of first array");
    }
    else
    {
        for(x=0 ; x<n ; x++)
        {
            for(y=0 ; y<m ; y++)
                if(arr1[x]==arr2[y])
                {
                    count++;
                    break;
                }
        }
        if(count==n)
            printf("\n\nThe first array is the subset of second array");
        else
            printf("\n\nThe first array is not the subset of second array");
    }
}
