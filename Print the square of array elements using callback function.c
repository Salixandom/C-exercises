#include <stdio.h>

int square(int n)
{
    return n*n;
}

void arr_sqr(int *arr , int size , int (*callback)(int))
{
    for(int i=0 ; i<size ; i++)
        arr[i]=callback(arr[i]);
}

int main()
{
    int n;
    printf("Enter how many elements you want to store: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0 ; i<n ; i++)
    {
        printf("Enter array elements %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    arr_sqr(arr,n,square);
    printf("\nNew array is: ");
    for(int i=0 ; i<n ; i++)
        printf("%d ",arr[i]);
}
