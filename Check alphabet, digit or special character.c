#include <stdio.h>
int main()
{
    char ch;
    printf("Enter your character : ");
    scanf("%c",&ch);

    if ((ch>=65 && ch<=90) ||(ch>=97 && ch<=122))
        printf("\n\tYour input is an Alphabet\n");
    else if (ch>=48 && ch<=57)
        printf("\n\tYour input is a digit\n");
    else if ((ch>=33 && ch<=47)||(ch>=58 && ch<=64)||(ch>=91 && ch<=96)||(ch>=123 &&ch<=126))
        printf("\n\tYour input is a special character\n");

    getch();
}
