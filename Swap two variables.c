#include <stdio.h>
int main()
{
    int temp,num1,num2;
    printf("Enter your value of num1 : ");
    scanf("%d",&num1);
    printf("Enter your value of num2 : ");
    scanf("%d",&num2);
    temp=num1;
    num1=num2;
    num2=temp;
    printf("\n\nNow your value of num1 is %d and your value of num2 is %d",num1,num2);
    getch();
}
