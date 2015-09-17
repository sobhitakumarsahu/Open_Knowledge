#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,4,5,6};
    int i,tot=0,size;
    size=sizeof(arr)/sizeof(arr[0]);
    tot=(size+1)*(size+2)/2;
    for(i=0;i<size;i++)
    {
        tot=tot-arr[i];
    }
    cout<<"MISSED NUM: "<<tot;
}
