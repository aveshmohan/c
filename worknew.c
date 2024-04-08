#include<stdio.h>
int main()
{
    int  mark,p,c,b,m,co;
    float totalmarks;
    float percentage;
    char grade;
    printf("enter physics mark");
    scanf("%d",&p);
    printf("enter chemistry mark");
    scanf("%d",&c);
    printf("enter biology mark");
    scanf("%d",&b);
    printf("enter maths mark");
    scanf("%d",&m);
    printf("enter marks in computer");
    scanf("%d",&co);


    totalmarks=p+c+b+m+co;
    percentage=(totalmarks/500)*100;

    if(percentage>=90){
        grade='a';
    }
    else if(percentage>=80){
        grade='b';
    }
    else if(percentage>=70){
        grade ='c';
    }
    else if(percentage>=60){
        grade='d';
    }
    else if(percentage>=40){
        grade='e';
    }
    else {
        grade ='f';

    }  
      printf("%c",grade);

    



return 0;
}