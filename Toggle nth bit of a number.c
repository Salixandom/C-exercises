#include <stdio.h>
int main()
{
    int n,r,new_num;
    printf("Enter number: ");
    scanf("%d",&n);
    printf("Enter nth number: ");
    scanf("%d",&r);
    new_num=(1<<r)^n;
    printf("New number: %d",new_num);
}
