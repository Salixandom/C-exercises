#include <stdio.h>
int n;
int main()
{
    printf("Enter how many elements you want to store: ");
    scanf("%d",&n);
    int i,j,k,l,arr[n],sum;
    printf("\nEnter your array elements: \n\n");
    for(i=0 ; i<n ; i++)
    {
        printf("Element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("\nThe given array is: ");
    for(i=0 ; i<n ; i++)
        printf("%d ",arr[i]);
    printf("\n\nEnter your sum: ");
    scanf("%d",&sum);
    printf("\nThe elements are: \n");
    for(i=0 ; i<n-3 ; i++)
    {
        for(j=i+1 ; j<n-2 ; j++)
        {
            for(k=j+1 ; k<n-1 ; k++)
            {
                for(l=k+1 ; l<n ; l++)
                {
                    if(arr[i]+arr[j]+arr[k]+arr[l]==sum)
                    {
                        printf("%d %d %d %d\n",arr[i],arr[j],arr[k],arr[l]);
                        break;
                    }
                }
            }
        }
    }
}
