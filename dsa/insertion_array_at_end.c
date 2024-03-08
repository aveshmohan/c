#include<stdio.h>
int insertend(int arr[],int n,int key,int capacity)
{
    if(n>=capacity)
    return n;
    arr[n]=key;
    return(n+1);
}
int main()
{
    int arr[20]={12,23,2,34,5,6};
    int capicity =sizeof(arr)/size(arr[0]);
    int n=6;
    int i,key=23;
    printf("\n before insertion: ");
    for(i=0;i<n;i++)
    printf("%d",arr[i]);

    n=insertend(arr,n,key,capacity);
    printf("\n after insertion: ");
    for(i=0;i<n;i++)
    printf("%d",arr[i]);
    return 0;

}