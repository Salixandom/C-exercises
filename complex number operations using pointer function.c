#include <stdio.h>

typedef struct
{
    int real;
    int imag;
}complex;

complex * create_num(int a, int b)
{
    complex *new_num=(complex*)malloc(sizeof(complex));
    new_num->real=a;
    new_num->imag=b;
    return new_num;
}

complex* sum(complex* a, complex* b)
{
    complex* result=create_num(0,0);
    result->real=a->real+b->real;
    result->imag=a->imag+b->imag;
    return result;
}

complex* subs(complex* a,complex* b)
{
    complex* result=create_num(0,0);
    result->real=a->real-b->real;
    result->imag=a->imag-b->imag;
    return result;
}

complex* multi(complex* a,complex *b)
{
    complex* result=create_num(0,0);
    result->real=(a->real*b->real)-(a->imag*b->imag);
    result->imag=a->real*b->imag+a->imag*b->real;
    return result;
}

complex* div(complex* a,complex* b)
{
    complex* result=create_num(0,0);
    result->real=(float)(a->real*b->real+a->imag*b->imag)/(float)(b->real*b->real+b->imag*b->imag);
    result->imag=(float)(b->real*a->imag-a->real*b->imag)/(float)(b->real*b->real+b->imag*b->imag);
    return result;
}

int main()
{
    int a1,a2,b1,b2;
    scanf("%d %d %d %d",&a1,&a2,&b1,&b2);
    complex *num1,*num2,*result;
    num1=create_num(a1,a2);
    num2=create_num(b1,b2);
    result=div(num1,num2);
    printf("%d + %di\n",result->real,result->imag);
}
