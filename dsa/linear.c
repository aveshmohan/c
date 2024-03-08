

//function to implement linear
//search in sorted array
#include<stdio.h>

//function to implement search operation
int findelement(int arr[],int n ,int key)
{
    int i;
    for(i=0;i<n;i++)
    if(arr[i]==key)
      return i;
    //if the key is not is not found
    
      return -1;
}
//drivers code 
int main()
{
    int arr[]={5,6,7,8,9,10};
    int n=sizeof(arr)/sizeof(arr[0]);

    //using a last element as search element
    int key =10;

    //function call
    int position =findelement(arr,n,key);

    if(position==-1)
         printf("element not found");
    else
         printf("element found at position %d",position+1);
         return 0;
}
