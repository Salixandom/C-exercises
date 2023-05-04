#include <stdio.h>
int main()
{
    char st1[100],st2[100];
    int i,x,count=0;
    printf("Input the 1st string: ");
    gets(st1);
    printf("Input the 2nd string: ");
    gets(st2);
    for(i=0,x=0 ; (st1[i]!=0)&&(st2[x]!=0) ; i++,x++)
    {
        if(st1[i]==st2[x])
            count++;
        else
        {
            count=-1;
            break;
        }

    }
    if(i==x && i==count)
        printf("\nThe strings are equal\n");
    else
        printf("\nThe strings are not equal\n");
}
