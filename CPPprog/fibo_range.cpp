#include<iostream>
using namespace std;
void fibos(int range)
{
    static long int f=0,s=1,sum;
    //5=>011235
    if(range>0)
    {
        sum=f+s;
        f=s;
        s=sum;
        cout<<sum<<" ";
        fibos(range-1);
    }

}
int main()
{
    int fibo,range;
    cout<<"Enter a range, you wish to see the fibo series: ";
    cin>>range;
    if(range==0)
    cout<<0<<" ";
    else if(range==1)
    cout<<0<<" "<<1<<" ";
    else
    {
        cout<<0<<" "<<1<<" ";
        fibos(range);
    }

}
