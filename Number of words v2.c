#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    printf("Enter string: ");
    fgets(str, 100, stdin);
    int count = 0;
    char *token;
    token = strtok(str, " ");
    if (token != NULL)
        count++;
    while (strtok(NULL, " "))
        count++;
    printf("\n\n%d\n", count);
    return 0;
}
