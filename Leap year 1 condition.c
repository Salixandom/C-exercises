#include <stdio.h>
int main()
{
    int n;
    printf("Enter your number: ");
    scanf("%d",&n);
    if(n%400==0 || (n%4==0 && n%100!=0))
        printf("\n%d is a Leap year\n",n);
    else
        printf("\n%d is not a Leap year\n",n);
}
