#include<stdio.h>
int main(){

int i,j,c,n;
printf("Insert the number:");//nth term of 1,2,2,3,3,3,4,4,4,4..

scanf("%d",&n);
c=0;
for(i=1;i<=214789012;i++){
for(j=1;j<=i;j++){
printf("%d,",i);
c=c+1;

if(c==n){
        printf("\n%d th term is %d\n",n,i);
    break;
}
}
if(c==n){
break;
}

}






}
