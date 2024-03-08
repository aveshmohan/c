#include<stdio.h>
int binarysearch(int arr[],int low,int high,int key)
{
    if(high<low)
    return -1;
    int mid =(low+high)/2;
    if(key==arr[mid])
    return mid;
    if(key>arr[mid])
    return binarysearch(arr,(mid+1),high,key);
    return binarysearch(arr,low,(mid-1),key);
}
int main()
{
    int size;
    printf("enter size:");
    scanf("%d",&size);
    int arr[size];
    printf("enter array elements as sorted:");
    for(int i=0;i<size;i++)

{
    scanf("%d",&arr[i]);
}
int n=sizeof(arr)/sizeof(arr[0]);
int key;
printf("enter key to be search:");
scanf("%d",&key);
printf("elements found at index: %d\n",binarysearch(arr,0,n-1,key));
return 0;
}