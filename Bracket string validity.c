#include <stdio.h>
int main()
{
    char st[100];
    int x,flag=0;
    printf("Enter your bracket string: ");
    gets(st);
    for(x=0 ; st[x]!=0 ; x++)
    {
        if ((st[x]=='(' && st[x+1] == ')') || (st[x]=='{' && st[x+1]=='}') || (st[x]=='[' && st[x+1]==']') || (st[x]=='<' && st[x+1]=='>'))
            flag=2;
        else if((st[x-1]== '(' && st[x]==')') || (st[x-1]=='{' && st[x]=='}') || (st[x-1]=='[' && st[x]==']') || (st[x-1]=='<' && st[x]=='>'))
            flag=2;
        else
        {
            printf("\nCheck position %d",x+1);
            flag=0;
        }
    }
    if(flag==2)
        printf("\nThere is no fault\n");
    }
