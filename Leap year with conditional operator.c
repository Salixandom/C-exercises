#include <stdio.h>
int main()
{
    int year,result;
    printf("Enter your year : ");
    scanf("%d",&year);

    result = (year%400==0) || (year%100!=0 && year%4==0) ? printf("\n\t%d is a leap year\n",year) \
    : printf("\n\t%d is not a leap year\n",year);
    getch();
}

