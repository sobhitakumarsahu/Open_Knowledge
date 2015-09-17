#include<iostream>
using namespace std;
int main()
{
    int arr[]={10,20,30,40,50,60,70,80,90,100};
    int len=sizeof(arr)/sizeof(arr[0]);
    int range,i,j,temp;
    cout<<"Enter the range to reverse: ";
    cin>>range;
    if(range<len)
    {
        for(i=0,j=range-1;i<j;i++,j--)
        {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    for(i=0;i<len;i++)
    {
        cout<<arr[i]<<" ";
    }
}
