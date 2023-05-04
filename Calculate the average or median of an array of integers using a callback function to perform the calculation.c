#include <stdio.h>

float average(int arr[],int size)
{
    float result=0;
    for(int i=0 ; i<size ; i++)
        result+=(float)arr[i];
    return result/size;
}

float median(int arr[],int size)
{
    float result=0;
    if(size%2==0)
        result=(float)(arr[size/2]+arr[(size/2)+1])/2;
    else
        result=arr[(size/2)+1];
    return result;
}

float result(int arr[], int size, float(*callback)(int,int))
{
    float result;
    int temp;
    for(int i=0 ; i<size ; i++)
    {
        for(int j=0 ; j<size ; j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    result=callback(arr,size);
    return result;
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
    float av=result(array,n,average);
    printf("\nAverage: %d\n",av);
    float med=result(array,n,median);
    printf("Median: %d\n",med);
}
