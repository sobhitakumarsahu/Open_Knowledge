#include<iostream>
using namespace std;
#include<list>
int main()
{
    int arr[5]={1,2,3,4,5};
    list<int> list1(arr,arr+5);
        for(list<int>::iterator it=list1.begin();it!=list1.end();it++)
    {
        cout<<*it;
    }
    list1.remove(3);
    for(list<int>::iterator it=list1.begin();it!=list1.end();it++)
    {
        cout<<*it;
    }

}
