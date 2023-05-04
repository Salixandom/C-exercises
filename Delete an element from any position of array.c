#include <stdio.h>
int n;
int main()
{
    printf("Enter how many elements you want to store: ");
    scanf("%d",&n);
    int x,y,arr[n];
    for(x=0 ; x<n ; x++)
    {
        printf("Element %d: ",x+1);
        scanf("%d",&arr[x]);
    }
    printf("\n\nInter the position where to delete: ");
    scanf("%d",&y);
    printf("\n\nThe new list is: \n\n");
    for(x=0 ; x<n ; x++)
    {
        if(x+1==y)
            continue;
        printf("%d ",arr[x]);
    }
    printf("\n");
}
