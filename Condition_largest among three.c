#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter your three integers with space : ");
    scanf("%d %d %d",&a,&b,&c);

    if (a>b && a>c)
        printf("\n\t%d is the largest number\n",a);
    else if (b>a && b>c)
        printf("\n\t%d is the largest number\n",b);
    else
        printf("\n\t%d is the largest number\n",c);
    getch();
}
