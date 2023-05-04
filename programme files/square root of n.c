#include<stdio.h>//square root of n
int main(){

float n,j,x;

printf("insert the number:");
scanf("%f",&n);

for(j=0;j<=n;j=j+0.001){


if(n-j*j<0.01)
{
    printf("square root is %0.2f",j);
break;
}





}










}
