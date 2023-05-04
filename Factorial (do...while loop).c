#include <stdio.h>
int main()
{
    int a,i=1,fact=1;
    printf("Enter your number : ");
    scanf("%d",&a);
    do
    {
        fact*=i;
        i++;
    }while(i<=a);
    printf("\n%d! = %d\n",a,fact);
    getch();
}
