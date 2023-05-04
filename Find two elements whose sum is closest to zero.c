#include <stdio.h>
#include <math.h>

int n;
int main()
{
    printf("Enter how many elements you want to store: ");
    scanf("%d",&n);
    int x,y,arr[n];
    int temp,sum;
    printf("\nEnter your elements: \n\n");
    for(x=0 ; x<n ; x++)
    {
        printf("Element %d: ",x+1);
        scanf("%d",&arr[x]);
    }
    printf("\nYour given array is: ");
    for(x=0 ; x<n ; x++)
        printf("%d ",arr[x]);
    int a=arr[0];
    int b=arr[1];
    temp=a+b;
    for(x=0 ; x<n ; x++)
    {
        for(y=x+1 ; y<n ; y++)
        {
            sum=arr[x]+arr[y];
            if(abs(sum)<abs(temp))
            {
                temp=sum;
                a=arr[x];
                b=arr[y];
            }
        }
    }
    printf("\n\nThe pair of elements whose sum is minimum are: [%d,%d]\n",a,b);
}
