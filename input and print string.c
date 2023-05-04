#include <stdio.h>
int main()
{
    char st[40];
    printf("Enter your line: ");        ///age jodi input niye size declare korte chai tao dissche na
    gets(st);
    printf("\nYour string is: %s\n",st);
}



/*
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *p;
    p=malloc(20);

    printf("Enter some text: ");
    gets(p);

    printf("You have typed: %s",p);

    return 0;
}
*/
