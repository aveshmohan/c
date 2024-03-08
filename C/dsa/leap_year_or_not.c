//programe to print year is leap or not
#include<stdio.h>
int main()
{
int year;
printf("enter a year");
scanf("%d",&year);
if(((year%4==0) && (year%100!=0))||(year%400==0) )   
{
   printf("it is a leap year");
}else{
    printf("not leap year");
}


return 0;
}
