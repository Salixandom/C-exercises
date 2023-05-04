#include <stdio.h>
#include <stdarg.h>

void print(char *str, ...)
{
    va_list args;
    va_start(args,str);
    while(*str)
    {
        if(*str=='s')
            printf("%s\n",va_arg(args,char*));
        else if(*str=='d')
            printf("%d\n",va_arg(args,int));
        else if(*str=='f')
            printf("%lf\n",va_arg(args,double));
        str++;
    }
    va_end(args);
}


int main()
{
    print("sfd","Sakib",5.8,240);
}
