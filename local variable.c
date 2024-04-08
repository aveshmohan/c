#include<stdio.h>
void function();
int main(){

function();
return 0;
}
void function(){
    int x=10;  //local variable
    int y=12;
    x=x+1;
    y=y+1;
    printf("%d,%d ",x,y);
}