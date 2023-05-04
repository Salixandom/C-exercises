#include <stdio.h>
int n;
int main()
{
    printf("Enter how many elements you want to store: ");
    scanf("%d",&n);
    int x,y,arr[n],sum1=0,sum2=0;
    printf("\nEnter your array elements: \n\n");
    for(x=0 ; x<n ; x++)
    {
        printf("Element %d: ",x+1);
        scanf("%d",&arr[x]);
    }
    printf("\nThe given array is: ");
    for(x=0 ; x<n ; x++)
        printf("%d ",arr[x]);
    printf("\n\nThe equilibrium index found at: ");
    for(x=0 ; x<n ; x++)
    {
        for(y=0 ; y<n ; y++)
        {
            if(y<x)
                sum1+=arr[y];
            if(y>x)
                sum2+=arr[y];
        }
        if(sum1==sum2)
            printf("%d ",x);
        sum1=sum2=0;
    }
    printf("\n");
}
