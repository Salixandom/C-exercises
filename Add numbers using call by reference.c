#include <stdio.h>

int sum_12(int *a,int *b)
{
    return (*a+*b);
}

int main()
{
    int x,y;
    printf("Enter your first number: ");
    scanf("%d",&x);
    printf("Enter your second number: ");
    scanf("%d",&y);
    printf("\nThe sum of two number: %d\n",sum_12(&x,&y));
}
