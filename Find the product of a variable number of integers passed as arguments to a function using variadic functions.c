#include <stdio.h>
#include <stdarg.h>

int product(int count, ...)
{
    int product3=1;
    va_list args;
    va_start(args,count);
    for(int i=0 ; i<count ; i++)
        product3*=va_arg(args,int);
    va_end(args);
    return product3;
}

int main()
{
    printf("The product is: %d\n",product(3,6,15,-6));
}
