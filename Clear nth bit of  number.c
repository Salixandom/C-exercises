#include <stdio.h>
int main()
{
    int n,r,new_num;
    printf("Enter your number: ");
    scanf("%d",&n);
    printf("Enter your nth number: ");
    scanf("%d",&r);
    new_num=~(1<<(r-1))&n;
    printf("New number is: %d",new_num);
}
