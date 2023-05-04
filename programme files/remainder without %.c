#include<stdio.h>
int main()
{


float a,b,c,x;

printf("please insert first number:");

scanf("\%f",&a);

printf("please insert second number:");

scanf("\%f",&b);


c=a/b;
x=a-b*c;
printf("the remainder is:%f\n",x);


return 0;
}
