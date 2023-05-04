#include <stdio.h>
int main()
{
    char st1[100],st2[100];
    int x;
    printf("Enter your text: ");
    gets(st1);
    for(x=0 ; st1[x]!='\0' ; x++)
        st2[x]=st1[x];
    st2[x]='\0';
    printf("\nThe copied string is: %s\n",st2);
}
