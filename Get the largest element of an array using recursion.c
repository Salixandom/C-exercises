#include <stdio.h>

int n;

int lar_num(int val[])
{
    static int i=0,max=0;
    if(i<n)
    {
        if(max<val[i])
        {
            max=val[i];
            i++;
            return lar_num(val);
        }
        else
        {
            i++;
            lar_num(val);
        }
    }
    else
        return max;
}

int main()
{
    int x;
    printf("Enter how many elements you want to enter: ");
    scanf("%d",&n);
    int val[n];
    printf("-----------------------------------------------------------\n");
    printf("Enter your values: \n");
    for(x=0 ; x<n ; x++)
    {
        printf("Value %d: ",x+1);
        scanf("%d",&val[x]);
    }
    printf("\nMaximum element is: %d\n",lar_num(val));
}
