#include <stdio.h>
int main()
{
    int num,count,first,last;
    printf("Enter your number : ");
    scanf("%d",&num);
    count=(int)log10(num);
    first=num/pow(10,count);
    last=num%10;
    printf("\nFirst digit : %d\nLast digit : %d\nSum : %d\n",first,last,first+last);
}
