#include <stdio.h>
int main()
{
    int n;
    printf("Enter your number: ");
    scanf("%d",&n);
    if(n&1)
        printf("Least significant bit is set(1)");
    else
        printf("Least significant bit is not set(0)");
}
