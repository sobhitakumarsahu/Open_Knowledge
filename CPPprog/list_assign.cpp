#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int> list1;
    list<int> list2;
    list1.assign(7,100);
    list2.assign(list1.begin(),list1.end());
    int arr[]={10,20,30};
    list1.assign(arr,arr+3);
    cout<<"Size of list1: "<<int(list1.size());
    cout<<"Size of list2: "<<int(list2.size());
    return 0;
}
