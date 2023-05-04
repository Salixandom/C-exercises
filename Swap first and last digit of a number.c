#include <stdio.h>
int main()
{
    int num,last,first,count,swap;
    printf("Enter your number : ");
    scanf("%d",&num);
    count=(int)log10(num);
    last=num%10;
    first=num/pow(10,count);
    printf("First digit is : %d\n",first);
    printf("Last digit is : %d\n",last);
    swap=(last*pow(10,count))+fmod(num,pow(10,count))-last+first;
    printf("\n%d is swapped to %d\n",num,swap);
}
