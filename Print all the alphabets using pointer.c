#include <stdio.h>
#include <stdlib.h>
int main()
{
    char *a,alpha[27];
    int x;
    a=alpha;
    printf("All the alphabets are: \n");
    printf("---------------------------------------------------\n\n");
    for(x=0 ; x<26 ; x++)
    {
        *a='A'+x;
        a++;
    }
    a=alpha;
    for(x=0 ; x<26 ; x++)
    {
        printf("%c ",*a);
        a++;
    }
    printf("\n");
}


/*

#include <stdio.h>
#include <stdlib.h>
int main()
{
    char *a,*z;
    int x;
    z=malloc(27);
    a=z;
    printf("All the alphabets are: \n");
    printf("---------------------------------------------------\n\n");
    for(x=0 ; x<26 ; x++)
    {
        *a='A'+x;
        a++;
    }
    a=z;
    for(x=0 ; x<26 ; x++)
    {
        printf("%c ",*a);
        a++;
    }
    printf("\n");
}

*/
