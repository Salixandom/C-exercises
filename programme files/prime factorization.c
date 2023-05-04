 #include<stdio.h>
 int justify(n){
 int i,c;
 for(i=2;i<n;i++){
 if(n==2){
 c=n;
 break;}
 if(n%i==0){
 c=0;

 break;}
 if(n%i!=0){
 c=n;
 break;
 }

 }


 return c;
 }
 int main(){
 int j,k,m;
 printf("insert the number:");
 scanf("%d",&k);
 again:
 for(j=2;j<=k;j++){
    m=justify(j);
    if(m==0){
        continue;
    }
    if(k%j==0){
        printf("%d ",j);
    k=k/j;
    goto again;
    }





 }








 }
