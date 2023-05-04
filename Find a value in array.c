#include <stdio.h>
int main()
{
    int arr[]={2,4,546,234,56,3,65,32},n=8,a,x;
    printf("Enter your number: ");
    scanf("%d",&x);
    for(a=0 ; a<n ; a++)
    {
        if(x==arr[a]){
            printf("\n%d is present in the array number %d\n",x,a+1);
            break;}
    }
    if(a==n)
        printf("\n%d is not present in the array\n",x);
}
