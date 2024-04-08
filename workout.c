#include<stdio.h>
#include<string.h>
int main()
{
    char name[10];
    char temp[10];
    printf("enter a name");
    scanf("%s",name);
    printf("you have entered %s\n",name);
    strcpy(temp,name);
    printf("copied name is %s\n",temp);
    strrev(name);
    printf("reversed name is %s\n",name);
    if(strcpy(temp,name)==0){
        printf("%s is a palindrome",name);
    }else{
        printf("%s is not palindrome",name);
    }
    return 0;

}