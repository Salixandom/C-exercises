#include <stdio.h>
int n;
int main()
{
    printf("Enter how many elements you want to store: ");
    scanf("%d",&n);
    int arr[n],fix[n],x,y,count=1;
    printf("\nEnter your elements: \n\n");
    for(x=0 ; x<n ; x++)
    {
        printf("Element %d: ",x+1);
        scanf("%d",&arr[x]);
        fix[x]=2;
    }
    printf("\nThe frequency of all elements: \n\n");
    for(x=0 ; x<n ; x++)
    {
        for(y=x+1 ; y<n ; y++)
        {
            if(arr[x]==arr[y])
            {
                count++;
                fix[y]=0;
            }
        }
        if(fix[x]!=0)
            printf("%d occurs %d times\n",arr[x],count);
        count=1;
    }
}
