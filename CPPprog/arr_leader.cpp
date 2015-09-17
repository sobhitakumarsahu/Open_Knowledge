#include<iostream>
using namespace std;
int main()
{
    int arr[]={16, 17, 4, 3, 5, 2};
    int i,j,len;
    len=sizeof(arr)/sizeof(arr[0]);
    for(i=0;i<len;i++)
    {
        for(j=i+1;j<len;j++)
        {
            if(arr[i]<=arr[j])
            {
                break;
            }
        }
        if(j==len)
        {
            cout<<arr[i]<<" ";
        }
    }

}
