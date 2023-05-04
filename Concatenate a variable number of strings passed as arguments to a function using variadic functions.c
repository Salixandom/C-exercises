#include <stdio.h>
#include <stdarg.h>
#include <string.h>

void concat(char* result , int str , ...)
{
    va_list args;
    va_start(args,str);
    for(int i=0 ; i<str ; i++)
        strcat(result,va_arg(args,char*));
    va_end(args);
}

int main()
{
    char str1[100]="w3resource";
    char * str2=".";
    char * str3="com";
    concat(str1,2,str2,str3);
    printf("Result: %s\n",str1);
}
