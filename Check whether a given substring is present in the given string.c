#include <stdio.h>
#include <string.h>
int main()
{
    char st[100],sbst[50];
    int x,y,z,i,count=0;
    printf("Enter your text: ");
    gets(st);
    printf("Enter the text you want to find: ");
    gets(sbst);
    z=strlen(sbst);
    for(x=0 ; st[x]!=0 ; x++)
    {
        for(y=0 ; sbst[y]!=0 ; y++)
        {
            if(st[x]==sbst[y])
            {
                if(count>=1 && i+1!=y)
                {
                    count=0;
                    continue;
                }
                count++;
                i=y;
            }
        }
    }
    if(z==count)
        printf("\nThe substring exist in the string\n");
    else
        printf("\nThe substring does'nt exist in the string\n");
}
