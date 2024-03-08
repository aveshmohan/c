// #include<stdio.h>

// void function();
    
// int x=10;
// void main()
// {   

// function();

// }
// void function(){
//     int y=10;
//     x=x+1;
//     y=y+1;
//     printf("%d%d ",x,y);
// }
#include<stdio.h>

void function();

int x = 10;

void main() {   
    function();
}

void function() {
    int y = 0; // Initialize y to zero
    x = x + 1;
    y = y + 1;
    printf("%d %d ", x, y);
}
