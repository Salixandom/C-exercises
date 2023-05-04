#include <stdio.h>
int main()
{
    int n,x;
    printf("Enter your range : ");
    scanf("%d",&n);
    printf("\nAll Natural numbers upto %d are : \n\n",n);
    for(x=n ; x>0 ; x--)
        printf("%d, ",x);
    printf("\n");
}
