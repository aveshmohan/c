#include<stdio.h>
int findelement(int n,int key,int arr[])
{
    int i;
    for(i=0;i<n;i++)
    if(arr[i]==key)
    return i;
    return -1;
}
int main()
{
    int arr[]={8,7,6,5,4};
    int n=sizeof(arr)/sizeof(arr[0]);

    int key=6;

    int position=findelement(n,key,arr);
    if (position ==-1)
        printf("elements not found");
    else
       printf("element found in %d",position+1);
    return 0;
}