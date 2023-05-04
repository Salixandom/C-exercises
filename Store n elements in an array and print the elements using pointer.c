#include <stdio.h>
int main()
{
    int n,x,*a;
    printf("Enter how many elements you want to store: ");
    scanf("%d",&n);
    printf("\nEnter your array elements: \n\n");
    for(x=0 ; x<n ; x++)
    {
        printf("Element %d: ",x+1);
        scanf("%d",(a+x));
    }
    printf("\nThe given array is: ");
    for(x=0 ; x<n ; x++)
        printf("%d ",*(a+x));
    printf("\n");
}
