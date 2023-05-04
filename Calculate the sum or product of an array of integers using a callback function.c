#include <stdio.h>

int sum(int a , int b)
{
    return a+b;
}

int mult(int a , int b)
{
    return a*b;
}

int result(int * arr , int size , int (*callback)(int,int))
{
    int res=arr[0];
    for(int i=1 ; i<size ; i++)
        res=callback(res,arr[i]);
    return res;
}

int main()
{
    int n;
    printf("Enter how many elements you want to store: ");
    scanf("%d",&n);
    int array[n];
    printf("\nEnter array elements: \n\n");
    for(int i=0 ; i<n ; i++)
    {
        printf("Element %d: ",i+1);
        scanf("%d",&array[i]);
    }
    printf("\nSum of the array: %d",result(array,n,sum));
    printf("\nMultiplication of the array: %d\n",result(array,n,mult));
}
