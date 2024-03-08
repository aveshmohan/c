#include<stdio.h>
#include<string.h>
int main()
{
    char str1[20], str2[20];
    printf("enter string 1");
    gets(str1);
    printf("enter string 2");
    gets(str2);
    if(strcmp(str1,str2)==0)
        printf("string are equal");
    else
        printf("strings are not equal");
   return 0;

}