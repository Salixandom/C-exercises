#include <stdio.h>

int hail_stone(int n)
{
    static int x,count=1;
    if(n!=1)
    {
        if(n%2==0)
        {
            x=n/2;
            printf("%d ",x);
            count++;
            return hail_stone(x);
        }
        else
        {
            x=(n*3)+1;
            printf("%d ",x);
            count++;
            return hail_stone(x);
        }
    }
    else
    {
        printf("\n\nThe length of the sequence is %d\n",count);
        return 0;
    }
}

int main()
{
    int n;
    printf("Enter your starting value: ");
    scanf("%d",&n);
    printf("---------------------------------------------------\n");
    printf("Your Hailstone sequence is: \n\n");
    printf("%d ",n);
    hail_stone(n);
    return 0;
}
