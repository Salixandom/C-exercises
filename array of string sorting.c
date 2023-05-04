#include <stdio.h>
#include <string.h>
int main()
{
    char str[10][100],temp[100];
    int z;
    for(int i=0 ; i<10 ; i++)
    {
        gets(str[i]);
    }
    for(int i=0 ; i<10 ; i++)
    {
        for(int j=0 ; j<10 ; j++)
        {
            z=strcmp(str[i],str[j]);
            if(z>0)
            {
                strcpy(temp,str[i]);
                strcpy(str[i],str[j]);
                strcpy(str[j],temp);
            }
        }
    }
    printf("\nThe sorted string is: ");
    for(int i=0 ; i<10 ; i++)
    {
        puts(str[i]);
        printf("\n");
    }
}