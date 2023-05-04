#include <stdio.h>
int n;
int main()
{
    printf("Enter how many elements you want to store: ");
    scanf("%d",&n);
    int x,y,arr[n],a;
    printf("\nEnter your elements: \n\n");
    for(x=0 ; x<n ; x++)
    {
        printf("Element %d: ",x+1);
        scanf("%d",&arr[x]);
    }
    printf("\nThe given array is: ");
    for(x=0 ; x<n ; x++)
    {
        printf("%d ",arr[x]);
    }
    printf("\n\nEnter whose frequency you want to see: ");
    scanf("%d",&a);
    for(x=0 ; x<n ; x++)
        if(a==arr[x])
            y++;
    printf("\nThe number of times the number %d occurs in the given array is: %d\n",a,y);
    return 0;
}
