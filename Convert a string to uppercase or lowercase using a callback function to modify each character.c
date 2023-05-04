#include <stdio.h>

char uppercase(char ch)
{
    if(ch>='a' && ch<='z')
        return ch-32;
}

char lowercase(char ch)
{
    if(ch>='A' && ch<='Z')
        return ch+32;
}

void change(char* str, char(*callback)(char))
{
    for(int i=0 ; str[i]!='\0' ; i++)
    {
        str[i]=callback(str[i]);
    }
}

int main()
{
    char *str=(char*)malloc(100);
    printf("Enter your string: ");
    gets(str);
    change(str,uppercase);
    printf("\nUppercase string: %s\n",str);
    change(str,lowercase);
    printf("Lowercase string: %s\n",str);
}
