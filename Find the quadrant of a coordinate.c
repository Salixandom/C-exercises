#include <stdio.h>
int main()
{
    int x,y;
    printf("Enter your coordinate (x,y): ");
    scanf("%d %d",&x,&y);
    if(x>0 && y>0)
        printf("\nThe coordinate point (%d,%d) lies in the First quadrant.\n",x,y);
    else if(x>0 && y<0)
        printf("\nThe coordinate point (%d,%d) lies in the Fourth quadrant.\n",x,y);
    else if(x<0 && y>0)
        printf("\nThe coordinate point (%d,%d) lies in the Second quadrant.\n",x,y);
    else if(x<0 && y<0)
        printf("\nThe coordinate point (%d,%d) lies in the Third quadrant.\n",x,y);
    else if(x>0 && y==0)
        printf("\nThe coordinate point (%d,%d) lies in the positive part of X-axis.\n",x,y);
    else if(x<0 && y==0)
        printf("\nThe coordinate point (%d,%d) lies in the negative part of X-axis.\n",x,y);
    else if(x==0 && y>0)
        printf("\nThe coordinate point (%d,%d) lies in the positive part of Y-axis.\n",x,y);
    else if(x==0 && y<0)
        printf("\nThe coordinate point (%d,%d) lies in the negative part of Y-axis.\n",x,y);
    else
        printf("\nThe coordinate point (%d,%d) lies in the Origin.\n",x,y);
}

