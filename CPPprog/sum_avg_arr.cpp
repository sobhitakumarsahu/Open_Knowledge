#include<iostream>
using namespace std;
int main()
{
    int arr[]={10,20,30,40,50};
    int len=sizeof(arr)/sizeof(arr[0]);
    int sum=0,i;
    for (i=0;i<len;i++)
    {
        sum=sum+arr[i];
    }
    cout<<"SUM: "<<sum;
}
