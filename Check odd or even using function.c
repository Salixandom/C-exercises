#include<stdio.h>

void check_12(int n)
{
    if(n%2==0)
        printf("\nYour input is an even number.\n");
    else
        printf("\nYour input is an odd number.\n");
}

int main()
{
    int n;
    printf("Enter your number: ");
    scanf("%d",&n);
    check_12(n);
}
