#include<stdio.h>
int main(){
int n,k,s,x;
k=0;
printf(" First n'th odd numbers sum:");
scanf("%d",&k);
n=2*(k-1)+1;
s=0;
for(x=1;x<=n;x=x+1){

if(x%2==0){
continue;}
s=s+x;



}



printf("sum is %d",s);




}
