#include<stdio.h>
#include<string.h>
int main()
{
    char str[100]="this is javapoint with c and java";
    char *sub;
    sub=strstr(str,"with");
    printf("\nsubstring is %s",sub);
    return 0;
}