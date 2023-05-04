#include <stdio.h>

int case_sensitive(char ch1, char ch2)
{
    if(ch1==ch2)
        return 1;
    else
        return 0;
}

int case_n_sensitive(char ch1, char ch2)
{
    if((ch1==ch2)||(ch1-32==ch2)||(ch1+32==ch2))
        return 1;
    else
        return 0;
}

int palindrome(char *str, int (*callback)(char,char))
{
    int len=0,res=1;
    for(int i=0 ; str[i]!='\0' ; i++)
        len++;
    for(int i=0 ; i<len/2 ; i++)
        res*=callback(str[i],str[len-i-1]);
    return res;
}

int main()
{
    char *str=(char*)malloc(100);
    printf("Enter string: ");
    gets(str);
    if(palindrome(str,case_sensitive))
        printf("\n%s is a palindrome (case-sensitive)\n",str);
    else
        printf("\n%s is not a palindrome (case-sensitive)\n",str);
    if(palindrome(str,case_n_sensitive))
        printf("%s is a palindrome (case not sensitive)\n",str);
    else
        printf("%s is not a palindrome (case not sensitive)\n",str);
}
