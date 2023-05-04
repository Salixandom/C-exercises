#include <stdio.h>
int n;
int main()
{
    printf("Enter how many elements you want to store: ");
    scanf("%d",&n);
    int x,y,arr[n],a,temp,count=0;
    printf("\nEnter your elements: \n\n");
    for(x=0 ; x<n ; x++)
    {
        printf("Element %d: ",x+1);
        scanf("%d",&arr[x]);
    }
    printf("\nThe given array is: ");
    for(x=0 ; x<n ; x++)
        printf("%d ",arr[x]);
    for(x=0 ; x<n ; x++)
    {
        for(y=0 ; y<n ; y++)
        {
            if(arr[x]==arr[y])
            {
                count++;
                if(count>temp)
                {
                    temp=count;
                    a=arr[x];
                }
            }
        }
        count=0;
    }
    printf("\n\nThe maximum repeating number is: %d\n",a);
}
