#include <stdio.h>

int* Max_12(int *a,int *b)
{
    return (*a>*b) ? a : b;
}

int main()
{
    int x,y;
    printf("Enter your first number: ");
    scanf("%d",&x);
    printf("Enter your second number: ");
    scanf("%d",&y);
    printf("\nBigger number is: %d\n",*Max_12(&x,&y));
}
