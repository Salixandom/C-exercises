#include <stdio.h>
int main()
{
    int *a,x,n,sum=0;
    printf("Enter how many elements you want to store: ");
    scanf("%d",&n);
    printf("\nEnter your elements: \n\n");
    for(x=0 ; x<n ; x++)
    {
        printf("Element %d: ",x+1);
        scanf("%d",(a+x));
        sum+=*(a+x);
    }
    printf("\nThe sum of all the elements in the given array is: %d\n",sum);
}
