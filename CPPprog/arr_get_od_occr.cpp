#include<iostream>
using namespace std;
int getOddOccr(int arr[],int len)
{
    int i,res=0;
    for(i=0;i<len;i++)
    {
        res=res^arr[i];
    }
    cout<<"RES: "<<res<<"\n";
    return res;
}
int main()
{
    int arr[]={1, 2, 3, 2, 3, 1, 3,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<getOddOccr(arr,size)<<"\n";
}
