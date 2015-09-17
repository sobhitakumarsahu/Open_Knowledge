#include<iostream>
using namespace std;
#include<list>
int main()
{
    list<int> list1,list2;
    list1.push_back(10);
    list1.push_back(20);
    list1.push_back(30);
    list2.push_back(40);
    list2.push_back(50);
    list2.push_back(60);
    list1.swap(list2);
    cout<<"List-1: ";
    for(list<int>::iterator it=list1.begin();it!=list1.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<"\n";
    cout<<"List-2: ";
    for(list<int>::iterator it=list2.begin();it!=list2.end();it++)
    {
        cout<<*it<<" ";
    }
}
