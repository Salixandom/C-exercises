#include <stdio.h>
#include <stdarg.h>

int max_num(int count , ...)
{
    int max=-999;
    va_list args;
    va_start(args,count);
    for(int i=0 ; i<count ; i++)
    {
        int temp=va_arg(args,int);
        if(temp>max)
            max=temp;
    }
    va_end(args);
    return max;
}

int min_num(int count , ...)
{
    int min=999;
    va_list args;
    va_start(args,count);
    for(int i=0 ; i<count ; i++)
    {
        int temp=va_arg(args,int);
        if(temp<min)
           min=temp;
    }
    va_end(args);
    return min;
}

int main()
{
    printf("The maximum number is: %d\n",max_num(3,4,5,9));
    printf("The minimum number is: %d\n",min_num(3,4,5,9));
}
