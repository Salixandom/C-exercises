#include <stdio.h>

int Swap_12(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

int main()
{
    int x,y;
    printf("Enter your first number(x): ");
    scanf("%d",&x);
    printf("Enter your second number(y): ");
    scanf("%d",&y);
    Swap_12(&x,&y);
    printf("\nAfter swapping value of x: %d and the value of y: %d\n",x,y);
}
