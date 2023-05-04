#include <stdio.h>
int main()
{
    int x;
    printf("All ASCII characters according to codes are : \n");
    getch();
    for(x=1 ; x<=255 ; x++)
        printf("%d = %c\n",x,x);
}
