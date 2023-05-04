#include <stdio.h>
int main()
{
    int n,set;
    printf("Enter your number: ");
    scanf("%d",&n);
    for(int i=0 ; i<8*sizeof(int) ; i++)
        if((n>>i)&1)
            set=i;
    printf("The highest set bit is: %d",set);
}
