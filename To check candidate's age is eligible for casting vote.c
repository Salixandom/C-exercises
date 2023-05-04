#include <stdio.h>
int main()
{
    int age;
    printf("Enter candidate's age : ");
    scanf("%d",&age);

    if (age<18)
        printf("\n\tSorry, you are not eligible to cast vote.\n\tYou will be eligible after %d years.\n",18-age);
    else
        printf("\n\tCongratulation! You are eligible to cast vote.\n");

    getch();

}
