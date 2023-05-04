#include <stdio.h>
#include <string.h>

int main()
{
    char str[100],max[50],min[20];
    printf("Enter your string: ");
    fgets(str,100,stdin);
    char *token;
    token=strtok(str," ");
    strcpy(max,token);
    strcpy(min,token);
    while(token=strtok(NULL, " "))
    {
        if(strlen(token)>strlen(max))
            strcpy(max,token);
        if(strlen(token)<strlen(min))
            strcpy(min,token);
    }
    printf("\nLargest word: %s\n",max);
    printf("Smallest word: %s\n",min);
}