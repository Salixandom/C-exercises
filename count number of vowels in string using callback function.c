#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int is_vowel(char ch)
{
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
        return 1;
    else
        return 0;
}

int count_vowel(char *str, int (*callback)(char))
{
    int count=0;
    while(*str++)
    {
        count+=callback(*str);
    }
    return count;
}

int main()
{
    char *str=(char*)malloc(200);
    gets(str);
    int count=count_vowel(str,is_vowel);
    printf("There are %d number of vowels in your input string\n",count);
    return 0;
    free(str);
}