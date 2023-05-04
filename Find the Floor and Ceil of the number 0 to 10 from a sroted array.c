#include <stdio.h>

int n;

void ceil_12(int arr[n],int x)
{
    int y;
    for(y=0 ; y<n ; y++)
    {
        if(x==arr[y] || x<arr[y])
        {
            printf(" Ceil is: %d ",arr[y]);
            break;
        }
    }
    if(y==n)
        printf(" Ceil is: Invalid ");
}

void floor_12(int arr[n],int x)
{
    int y;
    for(y=n-1 ; y>=0 ; y--)
    {
        if(x>arr[y] || x==arr[y])
        {
            printf("Floor is: %d",arr[y]);
            break;
        }
    }
    if(y<0)
        printf("Floor is: Invalid");
}

int main()
{
    printf("Enter how many elements you want to store in array(<10): ");
    scanf("%d",&n);
    int x,arr[n];
    printf("\nEnter your array elements: \n\n");
    for(x=0 ; x<n ; x++)
    {
        printf("Element %d: ",x+1);
        scanf("%d",&arr[x]);
    }
    printf("\nThe given array is: ");
    for(x=0 ; x<n ; x++)
        printf("%d ",arr[x]);
    printf("\n");
    for(x=0 ; x<=10 ; x++)
    {
        printf("Number is %d: ",x);
        ceil_12(arr,x);
        floor_12(arr,x);
        printf("\n");
    }
}
