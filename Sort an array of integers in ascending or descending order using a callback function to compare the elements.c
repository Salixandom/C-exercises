#include <stdio.h>

int array[99];

int asscending(int a, int b)
{
    if(a>b)
        return b;
    else
        return a;
}

int decending(int a, int b)
{
    if(a>b)
        return a;
    else
        return b;
}

int * ordering(int * arr, int size, int (*callback)(int,int))
{
    for(int j=0 ; j<size ; j++)
    {
        for(int i=0 ; i<size ; i++)
        {
            int temp=callback(arr[i],arr[i+1]);
        }
    }
    return array;
}

int main()
{
    int n;
    printf("Enter how many elements you want to store: ");
    scanf("%d",&n);
    int arr[n];
    printf("\nEnter array elements: \n\n");
    for(int i=0 ; i<n ; i++)
    {
        printf("Element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    int *ass=ordering(arr,n,asscending);
    printf("\n\nAscending order: ");
    for(int i=0 ; i<n ; i++)
        printf("%d ",ass[i]);
    int *dec=ordering(arr,n,decending);
    printf("\n\nDescending order: ");
    for(int i=0 ; i<n ; i++)
        printf("%d ",dec[i]);
    printf("\n");
}
