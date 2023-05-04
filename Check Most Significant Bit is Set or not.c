#include <stdio.h>

int main()
{
    int n,r_shift;
    printf("Enter your number: ");
    scanf("%d",&n);
    r_shift=sizeof(int)*8-1;
    if((n>>r_shift)&1)
        printf("Most Significant Bit is Set");
    else
        printf("Most Significant Bit is not Set");
}
