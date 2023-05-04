#include <stdio.h>
int main()
{
    int n,r,r_shift;
    printf("Enter your number: ");
    scanf("%d",&n);
    printf("Enter the nth number: ");
    scanf("%d",&r);
    r_shift=r-1;
    printf("\nThe nth of the number %d is: %d\n",n,(n>>r_shift)&1);
}
