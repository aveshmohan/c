#include<stdio.h>
int sum();
void main()
{
    int c=sum();
    printf("sum of 2 numbers is:%d\n",c);
}
int sum()
{
    int a,b,c;
    printf("enter 2 numbers");
    scanf("%d%d",&a,&b);
    c =a+b;

}