//programme to check wheather string is palindrome or note
#include<stdio.h>
#include<string.h>
int main()
{
    char name[10];
    char temp[20];
    printf("enter a name\n");
    scanf("%s",&name);
    strcpy(temp,name);
    strrev(name);
    printf("reversed string is %s\n",name);
    if(strcmp(temp,name)==0)
        printf("entered name is palindrome");
    else
        printf("not a palindrome");

        return 0;
    

    
    
}