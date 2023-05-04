#include <stdio.h>
int n;
int main()
{
    printf("Enter how many elements you want to store: ");
    scanf("%d",&n);
    printf("\nEnter your elements: \n\n");
    int x,y,arr[n],fix[n],count=0;
    for(x=0 ; x<n ; x++)
    {
        printf("Element %d: ",x+1);
        scanf("%d",&arr[x]);
        fix[x]=2;
    }
    printf("\nYour given array is: ");
    for(x=0 ; x<n ; x++)
        printf("%d ",arr[x]);
    printf("\n\nThe repeating elements are: ");
    for(x=0 ; x<n ; x++)
    {
        for(y=x+1 ; y<n ; y++)
        {
            if(arr[x]==arr[y])
            {
                fix[y]=0;
                count++;
            }
        }
        if(fix[x]!=0 && count>0)
            printf("%d ",arr[x]);
        count=0;
    }
    printf("\n");
}
