#include <stdio.h>

int sum_na_num(int x)
{
    if(x==1)
        return 1;
    else
        return(x+sum_na_num(x-1));
}

int main()
{
    int x;
    printf("Enter your ending range: ");
    scanf("%d",&x);
    printf("\nYour sum is: %d\n",sum_na_num(x));
}
