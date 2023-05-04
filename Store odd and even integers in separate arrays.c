#include <stdio.h>
int main()
{
    int arr1[100],arr2[100],arr3[100],n,x,y=0,z=0;
    printf("Enter how many elements you want to choose: ");
    scanf("%d",&n);
    printf("\nEnter your elements: \n\n");
    for(x=0 ; x<n ; x++)
    {
        printf("Element %d: ",x+1);
        scanf("%d",&arr1[x]);
        if(arr1[x]%2==0)
        {
            arr2[y]=arr1[x];
            y++;
        }
        else
        {
            arr3[z]=arr1[x];
            z++;
        }
    }
    printf("\nEven numbers are: \n");
    for(x=0 ; x<y ; x++)
        printf("%d ",arr2[x]);
    printf("\nOdd numbers are: \n");
    for(x=0 ; x<z ; x++)
        printf("%d ",arr3[x]);
}
