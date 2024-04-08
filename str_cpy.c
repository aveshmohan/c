#include<stdio.h>
#include<string.h>
int main()
{
     char a[6]="hellow";
     char b[6];
     strcpy(b,a);
     printf("value of second string %s",b);
     return 0;
}