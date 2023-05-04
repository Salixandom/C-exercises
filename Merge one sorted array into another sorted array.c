#include <stdio.h>
int n,m;
int main()
{
    printf("Enter your size of two arrays: ");
    scanf("%d %d",&n,&m);
    int x,y,z,arr1[n],arr2[m],arr3[n+m],a;
    printf("\nEnter your array1 elements: \n\n");
    for(x=0 ; x<n ; x++)
    {
        printf("Element %d: ",x+1);
        scanf("%d",&arr1[x]);
    }
    printf("\nEnter your array2 elements: \n\n");
    for(x=0 ; x<m ; x++)
    {
        printf("Element %d: ",x+1);
        scanf("%d",&arr2[x]);
    }
    if(m>n)
    {
        a=m;
        for(x=0 ; x<a ; x++)
        {
            arr3[x]=arr2[x];
            arr3[x+a]=arr1[x];
        }
    }
    else
    {
        a=n;
        for(x=0 ; x<a ; x++)
        {
            arr3[x]=arr1[x];
            arr3[x+a]=arr2[x];
        }
    }
    for(x=0 ; x<m+n ; x++)
    {
        for(y=1 ; y<m+n ; y++)
        {
            if(arr3[y-1]>arr3[y])
            {
                z=arr3[y-1];
                arr3[y-1]=arr3[y];
                arr3[y]=z;
            }
        }
    }
    printf("\nAfter merging two arrays: \n\n");
    for(x=0 ; x<m+n ; x++)
        printf("%d ",arr3[x]);
    printf("\n");
}
