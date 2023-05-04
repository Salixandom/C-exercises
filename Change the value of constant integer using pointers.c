#include <stdio.h>
int main()
{
    const int x;
    int *p,y;
    printf("Enter your number: ");
    scanf("%d",&x);
    p=&x;
    printf("\nEnter the new value: ");
    scanf("%d",&y);
    *p=y;
    printf("\nThe changed value is: %d\n",x);
}
