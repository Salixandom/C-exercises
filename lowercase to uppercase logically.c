#include <stdio.h>
int main()
{
    char x;
    printf("Enter your lowercase character : ");
    scanf("%c",&x);
    printf("\nYour uppercase character is : %c\n",x-32);
}
