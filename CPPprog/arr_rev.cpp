#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5};
    int i,j,len,temp;
    len=sizeof(arr)/sizeof(arr[0]);
    for(i=0,j=len-1;i<j;i++,j--)
    {
        if(arr[i]!=arr[j])
        {
            cout<<"Comparision occured \n";
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    for(i=0;i<len;i++)
    {
        cout<<arr[i];
    }

}
