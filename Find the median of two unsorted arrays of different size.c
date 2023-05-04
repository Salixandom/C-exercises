#include <stdio.h>
int n,m;
int main()
{
    printf("Enter your size of first array: ");
    scanf("%d",&n);
    printf("Enter your size of second array: ");
    scanf("%d",&m);
    int x,y,a,arr1[n],arr2[m],arr3[m+n];
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
    printf("\nThe given second array is: ");
    for(x=0 ; x<m ; x++)
        printf("%d ",arr2[x]);
    if(m>n)
    {
        for(x=0 ; x<m ; x++)
        {
            arr3[x]=arr2[x];
            arr3[x+m]=arr1[x];
        }
    }
    else
    {
        for(x=0 ; x<n ; x++)
        {
            arr3[x]=arr1[x];
            arr3[x+n]=arr2[x];
        }
    }
    for(x=0 ; x<m+n ; x++)
    {
        if(arr3[x-1]>arr3[x])
        {
            y=arr3[x-1];
            arr3[x-1]=arr3[x];
            arr3[x]=y;
        }
    }
    a=m+n;
    if(a%2==0)
    {
        float sum=(arr3[(a/2)-1]+arr3[a/2])/2;
        printf("\n\nThe median of two different size arrays are : %.2f\n",sum);
    }
    else
        printf("\n\nThe median of two different size arrays are : %d\n",arr3[a/2]);
}
