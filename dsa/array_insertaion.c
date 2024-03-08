#include<stdio.h>
int main()
{
    int num,position;
    int a[10], size,i;
    printf("enter the size of array");
    scanf("%d",&size);
    printf("enter array elements");
    for(i=0;i<size;i++)
    scanf("%d",&a[i]);
    printf("elements are \n");
    for(i=0;i<size;i++)
    printf("%d\n",a[i]);

    printf("enter the number you want to insert\n");
    scanf("%d",&num);
    printf("enter the position\n ");
    scanf("%d",&position);

    for(i=size-1;i>=position-1;i--)
    {
        a[i+1] = a[i];
    }
    a[position-1] = num;
    size++;
    for(i=0;i<size;i++)
    printf("%d ",a[i]);

    return 0;

}