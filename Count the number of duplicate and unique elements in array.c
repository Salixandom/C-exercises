#include <stdio.h>

int n;

int main()
{
    int x,y,count=0;
    printf("Enter how many elements you want to store: ");
    scanf("%d",&n);
    int arr[n];
    printf("\nEnter your elements: \n");
    for(x=0 ; x<n ; x++)
    {
        printf("Element %d: ",x+1);
        scanf("%d",&arr[x]);
    }
    for(x=0 ; x<n ; x++)
    {
        for(y=0 ; y<n ; y++)
        {
            if(arr[x]==arr[y] && x!=y)
                count++;
        }
    }
    printf("\nThere are %d duplicate values in your array\n",count);
    printf("There are %d unique values in your array\n",n-(count*2));
}
