#include <stdio.h>
int main()
{
    int a,b,c,largest;
    printf("Enter your three integers with space : ");
    scanf("%d %d %d",&a,&b,&c);

    largest = a>b ? (a>c ? a : c) : (b>c ? b : c);

    printf("\n\t%d is the largest number\n");
    getch();
}
