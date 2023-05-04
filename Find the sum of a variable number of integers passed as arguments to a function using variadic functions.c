#include <stdio.h>
#include <stdarg.h>

int sum(int count, ...)
{
    int sum=0;
    va_list args;
    va_start(args,count);
    for(int i=0 ; i<count ; i++)
        sum+=va_arg(args,int);
    return sum;
}

int main()
{
    printf("The sum is: %d\n",sum(3,6,15,-6));
}
