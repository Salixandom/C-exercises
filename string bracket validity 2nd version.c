#include <stdio.h>
#include <string.h>
int main()
{
    char bra[100];
    gets(bra);
    int x,i,count1=0,count2=0,count3=0,count4=0,count5=0,count6=0;
    x=strlen(bra);
    for(i=0 ; i<=x ; i++)
    {
        if(bra[i]=='(')
            count1++;
        else if(bra[i]==')')
            count2++;
        else if(bra[i]=='{')
            count3++;
        else if(bra[i]=='}')
            count4++;
        else if(bra[i]=='[')
            count5++;
        else if(bra[i]==']')
            count6++;
        if(count1<count2)
        {
            printf("\nInvalid");
            break;
        }
        if(count3<count4)
        {
            printf("\nInvalid");
            break;
        }
        if(count5<count6)
        {
            printf("\nInvalid");
            break;
        }
    }
    if(i==x+1)
        printf("\nValid");
}