#include <stdio.h>
int n;
int main()
{
    printf("Enter how many elements you want to store: ");
    scanf("%d",&n);
    int x,y,count=0,arr[n];
    printf("\nEnter your elements: \n\n");
    for(x=0 ; x<n ; x++)
    {
        printf("Element %d: ",x+1);
        scanf("%d",&arr[x]);
    }
    printf("\n\nThe second smallest element in the array is: ");
    for(x=0 ; x<n ; x++)
    {
        for(y=0 ; y<n ; y++)
        {
            if(arr[x]>arr[y])
                count++;
        }
        if(count==1)
        {
            printf("%d\n\n",arr[x]);
            break;
        }
        count=0;
    }
}
