#include<stdio.h>
int sum();
int main()
{
    int a;
    printf("sum of two numbers \n");
    a=sum();
    printf("sum is %d",a);
}
int sum()
{  
    int a,b,c;
    printf("enter two numbers");
    scanf("%d%d",&a,&b);
    c=a+b;
    return c; //with return value without argument
}