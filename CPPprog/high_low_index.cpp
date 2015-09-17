#include<iostream>
using namespace std;
int main()
{
    int arr[]={10,20,30,40,50,60,70,80,90,100};
    int high,low,i;
    high=arr[0];
    low=arr[0];
    for(i=0;i<10;i++)
    {
        if(high<arr[i])
        {
            high=arr[i];
        }
    }
    for(i=0;i<10;i++)
    {
        if(low>arr[i])
        {
            low=arr[i];
        }
    }
    cout<<"HIGH: "<<high<<"\n";
    cout<<"Low: "<<low<<"\n";
}
