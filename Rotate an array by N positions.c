#include <stdio.h>
int a;

int shift_pos(int arr[a],int a)
{
    int i,temp;
    temp=arr[0];
    for(i=0 ; i<a-1 ; i++)
        arr[i]=arr[i+1];
    arr[i]=temp;
}

void rot_12(int arr[a],int a,int n)
{
    int i;
    for(i=0 ; i<n-1 ; i++)
        shift_pos(arr,a);
    return;
}

int main()
{
    printf("Enter how many elements you want to store: ");
    scanf("%d",&a);
    int x,y,z,n,arr[a];
    printf("\nEnter your array elements: \n\n");
    for(x=0 ; x<a ; x++)
    {
        printf("Element %d: ",x+1);
        scanf("%d",&arr[x]);
    }
    printf("\nYour given array is: ");
    for(x=0 ; x<a ; x++)
        printf("%d ",arr[x]);
    printf("\n\nEnter your position to rotate form: ");
    scanf("%d",&n);
    printf("\nFrom %dth position the values of the array are: ",n);
    for(x=n-1 ; x<a ; x++)
        printf("%d ",arr[x]);
    printf("\nBefore %dth position the values of the array are: ",n);
    for(x=0 ; x<n-1 ; x++)
        printf("%d ",arr[x]);
    rot_12(arr,a,n);
    printf("\nAfter rotating from 4th position the array is: ",n);
    for(x=0 ; x<a ; x++)
        printf("%d ",arr[x]);
    printf("\n");
}
