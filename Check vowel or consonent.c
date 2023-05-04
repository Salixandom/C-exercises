#include <stdio.h>
int main()
{
    char ch;
    printf("Enter your alphabet : ");
    scanf("%c",&ch);

    if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        printf("\n\t%c is an vowel\n",ch);
    else
        printf("\n\t%c is a consonent\n",ch);

    getch();
}
