#include <stdio.h>
int main()
{
    int year;
    printf("Enter your year : ");
    scanf("%d",&year);

    if (year%100==0 && year%400==0)
        printf("\n\t%d is a leap year\n",year);
    else if (year%4==0 && year%100!=0)
        printf("\n\t%d is a leap year\n",year);
    else
        printf("\n\t%d is not a leap year\n",year);

    getch();
}
