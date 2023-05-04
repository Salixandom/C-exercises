#include <stdio.h>
#include <stdarg.h>

int count_variable(int str, ...)
{
    int count=0;
    va_list args;
    va_start(args,str);
    for(int i=0 ; i<str ; i++)
    {
        char *str=va_arg(args,char*);
        while(*str!='\0')
        {
            count++;
            str++;
        }
    }
    va_end(args);
    return count;
}

int main()
{
    printf("Total number of variables: %d\n",count_variable(3,"W3resource",".","com"));
}
