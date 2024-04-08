#include<stdio.h>
void fun(int ,int);
void main()
{
    int x=1,y=2;
    fun(x,y);
    printf("%d=x %d=y\n",x,y);

}
void fun(int x,int y)
{
    x=2;
    y=1;
    printf("%d=x %d =y",x,y);

}