#include <stdio.h>
int main()
{
    int a,result;
    printf("Enter your integer : ");
    scanf("%d",&a);

    result = (a%2==0 || a==0) ? printf("\n\t%d is a even number\n",a) : printf("\n\t%d is a odd number\n",a);

    getch();
}
