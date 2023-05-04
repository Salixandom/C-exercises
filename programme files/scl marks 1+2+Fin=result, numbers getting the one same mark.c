#include<stdio.h>
int main()
{

int first_term[10]={60,63,65,95,100,86,82,79,63,94};
int second_term[10]={72,71,79,66,88,87,98,93,80,77};
int final_term[10]={97,84,86,69,90,71,81,77,65,75};
int i,k,j,mark,c;
int x[10];
double a,b;
for(i=0;i<=9;i++){
        a=.25;
b=.5;
x[i]=(first_term[i]*a+second_term[i]*a+final_term[i]*b);
k=i+1;
printf("Roll number:%d\t final marks:%d\n",k,x[i]);

}

 //2nd part..want to find the number of students getting the same specific marks
 for(i=0;i<=9;i++){

     c=1;
    for(j=0;j<=9;j++){

        if(j==i){
            continue;
        }
        if(x[i]==x[j]){

            c=c+1;

        }


    }
printf("%d is obtained by %d\n",x[i],c) ;

 }

}
