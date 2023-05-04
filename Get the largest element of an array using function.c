#include <stdio.h>
int n;

int max_val(int val[])
{
    int i=0,max;
    max=val[0];
    while(i<n)
    {
        if(val[i]>max)
        {
            max=val[i];
        }
        i++;
    }
    return max;
}

int main()
{
    int x;
    printf("Enter how many elements you want to enter: ");
    scanf("%d",&n);
    int val[n];
    printf("--------------------------------------------------------\n");
    printf("Input %d elements in the array: \n",n);
    for(x=0 ; x<n ; x++)
    {
        printf("Value %d: ",x+1);
        scanf("%d",&val[x]);
    }
    printf("\nYour maximum input is: %d\n",max_val(val));
}
