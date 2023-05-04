#include <stdio.h>
int n;
int main()
{
    printf("Enter how many numbers you want to input: ");
    scanf("%d",&n);
    printf("---------------------------------------------------------------\n");
    printf("Enter your numbers: \n\n");
    int num[n],x;
    for(x=0 ; x<n ; x++)
    {
        printf("Num %d: ",x+1);
        scanf("%d",&num[x]);
    }
    int max=num[0];
    int min=num[0];
    for(x=0 ; x<n ; x++)
    {
        if(num[x]>max)
            max=num[x];
        if(min>num[x])
            min=num[x];
    }
    printf("\nMaximum value is: %d\n",max);
    printf("\nMinimum value is: %d\n",min);
}
