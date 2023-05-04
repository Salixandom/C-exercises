#include <stdio.h>
#include <math.h>
int main()
{
    int x1,x2,y1,y2;
    float m;
    printf("Enter your first point (x,y): ");
    scanf("%d %d",&x1,&y1);
    printf("Enter your second point (x,y): ");
    scanf("%d %d",&x2,&y2);
    m=(y1-y2)/(x1-x2);
    printf("\nAngle : %.2f\n",arctan(m)*180/M_PI);
}
