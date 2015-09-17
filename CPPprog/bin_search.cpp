#include<iostream>
using namespace std;
int bin_search(int arr[],int l,int h,int elem)
{
    while(l<=h)
    {
        int m=l+(h-1)/2;
        if(arr[m]==elem)
        {
            cout<<"Elem found!!";
            return m;
        }
        if(arr[m]<elem)
        {
            l=m+1;
        }
        else
            h=m-1;
    }
    return -1;
}
int main()
{
    int arr[10]={10,24,56,67,88,95,201,322,555,10000};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"n= "<<n;
    int elem=10000;
    int result=bin_search(arr,0,n-1,elem);
    (result==-1)?cout<<"elem not found":cout<<"found at "<<result<<" position";
}
