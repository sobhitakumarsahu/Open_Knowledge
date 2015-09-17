#include<iostream>
using namespace std;
#include<list>
int main()
{
    list<int> list1;
    list1.push_back(10);
    list1.push_back(20);
    list1.push_back(30);
    list1.push_back(40);
    list1.push_back(50);
    for(list<int>::iterator it=list1.begin();it!=list1.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<"\n";
    list<int>::iterator it1=list1.begin();
    list1.erase(it1);
    for(list<int>::iterator it2=list1.begin();it2!=list1.end();it2++)
    {
        cout<<*it2<<" ";
    }
}
