#include <stdio.h>
int n;
int main()
{
    printf("Enter how many elements you want to store: ");
    scanf("%d",&n);
    int x,y,count=1,arr[n],fic[n];
    printf("\nEnter your elements: \n\n");
    for(x=0 ; x<n ; x++)
    {
        printf("Element %d: ",x+1);
        scanf("%d",&arr[x]);
        fic[x]=2;
    }
    printf("\nThe element odd number of times is: ");
    for(x=0 ; x<n ; x++)
    {
        for(y=x+1 ; y<n ; y++)
            if(arr[x]==arr[y])
            {
                count++;
                fic[y]=0;
            }
        if(count%2!=0 && fic[x]!=0)
            printf("%d ",arr[x]);
        count=1;
    }
    printf("\n");
}
