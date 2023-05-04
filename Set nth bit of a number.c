#include <stdio.h>
int main()
{
    int n,r,new_num;
    printf("Enter your number: ");
    scanf("%d",&n);
    printf("Enter the nth number: ");
    scanf("%d",&r);
    new_num=(1<<r)|n;
    printf("The new number is: %d",new_num);
}
