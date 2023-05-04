#include<stdio.h>
int main(){

float n,k,x,l;
printf("the nth root u want:");
scanf("%f",&n);
printf("the number:");
scanf("%f",&k);

l=1/n;
x=pow(k,l);
printf(" result is:%0.2f",x);
}
