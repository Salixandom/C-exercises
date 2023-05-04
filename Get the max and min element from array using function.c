#include <stdio.h>
int n;

int max_val(int val[])
{
    int i=0,max;
    max=val[0];
    while(i<n)
    {
        if(max<val[i])
            max=val[i];
        i++;
    }
    return max;
}

int min_val(int val[])
{
    int i=n-1,min;
    min=val[n-1];
    while(i>=0)
    {
        if(min>val[i])
            min=val[i];
        i--;
    }
    return min;
}

int main()
{
    int x;
    printf("Enter how many elements you want to enter: ");
    scanf("%d",&n);
    int val[n];
    printf("----------------------------------------------------------------\n");
    for(x=0 ; x<n ; x++)
    {
        printf("Value %d: ",x+1);
        scanf("%d",&val[x]);
    }
    printf("\nYour maximum element is: %d\nYour minimum element is: %d\n",max_val(val),min_val(val));
}
