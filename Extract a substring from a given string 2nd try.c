#include <stdio.h>
int main()
{
    char st[100],sbst[100];
    int x,y,c=0;
    printf("Enter your text: ");
    gets(st);
    printf("\nInput the position to start extraction: ");
    scanf("%d",&x);
    printf("Input the length of substring: ");
    scanf("%d",&y);
    while(c<y)
    {
        sbst[c]=st[x+c-1];
        c++;
    }
    sbst[c]='\0';
    printf("\nThe extracted string is: \" %s \"\n",sbst);
}
