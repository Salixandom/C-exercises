#include <stdio.h>

int n;

void show_permu(int x,int n,int arr[])
{
    int i,temp,count=0;
    printf("%d ",x);
    for(i=0 ; i<n ; i++)
    {
        if(arr[i]!=x)
        {
            printf("%d ",arr[i]);
            if(count==0)
                temp=arr[i];
            count++;
        }
    }
    printf("\n%d ",x);
    for(i=0 ; i<n ; i++)
    {
        if(arr[i]!=x && arr[i]!=temp)
            printf("%d ",arr[i]);
    }
    printf("%d \n",temp);
    count=0;
}

int main()
{
    int x;
    printf("Enter how many elements you want store: ");
    scanf("%d",&n);
    int arr[n];
    printf("\nEnter your array elements: \n\n");
    for(x=0 ; x<n ; x++)
    {
        printf("Element %d: ",x+1);
        scanf("%d",&arr[x]);
    }
    printf("\nThe given array is: ");
    for(x=0 ; x<n ; x++)
        printf("%d ",arr[x]);
    printf("\n\nAll the possible permutations are: \n");
    for(x=0 ; x<n ; x++)
        show_permu(arr[x],n,arr);
}
