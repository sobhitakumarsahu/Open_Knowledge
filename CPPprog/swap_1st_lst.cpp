#include<iostream>
using namespace std;
class A
{
    int arr[5]={10,20,30,40,50};
public:
    void swapFstLst();
    void print();
};
void A::swapFstLst()
{
    int len=sizeof(arr)/sizeof(arr[0]);
    cout<<"SIZE:"<<len<<"\n";
    int temp;
    temp=arr[0];
    cout<<"TEMP: "<<temp<<"\n";
    arr[0]=arr[len-1];
    cout<<arr[0]<<"\n";
    arr[len-1]=temp;
}
void A::print()
{
    int len=sizeof(arr)/sizeof(arr[0]);
      cout<<"SIZE:"<<len<<"\n";
    for (int i=0;i<len;i++)
    {
        cout<<arr[i];
    }
}
int main()
{
    A obj;
    obj.swapFstLst();
    obj.print();
}
