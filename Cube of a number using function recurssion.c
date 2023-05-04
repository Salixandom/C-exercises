#include <stdio.h>

int cube_12(int n)
{
    static int count=0;
    count++;
    if(count==3)
        return n;
    else
        return (n*cube_12(n));
}

int main()
{
    int n;
    printf("Enter your number: ");
    scanf("%d",&n);
    printf("\nYour result is %d\n",cube_12(n));
}
