#include<iostream>
using namespace std;
void rotate_arr(int arr[],int j,int len)
{
    int temp,i;
    temp=arr[0];
    for(i=0;i<len-1;i++)
    {
        arr[i]=arr[i+1];
    }
    arr[i]=temp;
}
int main()
{
    int arr[]={1,2,3,4,5};
    int len=sizeof(arr)/sizeof(arr[0]);
    int i,d=2;
    for(i=0;i<2;i++)
    {
        rotate_arr(arr,i,len);
    }
    for(i=0;i<len;i++)
    {
        cout<<arr[i]<<" ";
    }
}
