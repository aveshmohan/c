#include<stdio.h>
int main()
{
  int limit;
  int i, sum=0;
  printf("enter a limit");
  scanf("%d",&limit);
  for(i=1;i<=limit;i++){
    sum=sum+i;
  }
    printf("sum is %d",sum);
    
    return 0;
  


}