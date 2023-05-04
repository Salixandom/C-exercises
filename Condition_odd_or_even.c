#include <stdio.h>
int main()
{
    int a;
    printf("Enter your number : ");
    scanf("%d",&a);
    if ((a%2==0)||(a==0))
        printf("\n\t%d is even number\n",a);
    else
        printf("\n\t%d is a odd number\n",a);
    getch();
}
