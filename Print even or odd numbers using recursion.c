#include <stdio.h>

int print_even_odd(int x,int n)
{
    if(x<=n)
    {
        if(x%2==0)
            printf("\t\t%d \n",x);
        else
            printf("%d ",x);
        return print_even_odd(x+1,n);
    }
    else
        return 0;

}

int main()
{
    int x,n;
    printf("Enter your starting value: ");
    scanf("%d",&x);
    printf("Enter your ending value: ");
    scanf("%d",&n);
    printf("\nOdd\t\tEven\n");
    print_even_odd(x,n);
}
