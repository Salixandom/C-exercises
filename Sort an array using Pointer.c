#include <stdio.h>
int main()
{
    int *a,x,y,n,temp;
    printf("Enter how many elements you want to store: ");
    scanf("%d",&n);
    printf("\nEnter your elements: \n\n");
    for(x=0 ; x<n ; x++)
    {
        printf("Element %d: ",x+1);
        scanf("%d",(a+x));
    }
    for(x=0 ; x<n-1 ; x++)
    {
        for(y=x+1 ; y<n ; y++)
        {
            if(*(a+x)>*(a+y))
            {
                temp=*(a+x);
                *(a+x)=*(a+y);
                *(a+y)=temp;
            }
        }
    }
    printf("\nAfter sorting the elements are: ");
    for(x=0 ; x<n ; x++)
        printf("%d ",*(a+x));
    printf("\n");
}
