#include<iostream>
using namespace std;
#include<list>
int main()
{
    list<int> list1;
    for(int i=0;i<10;i++)
    {
        list1.push_back(i);
    }
    list1.resize(5);
    list1.resize(8,100);
    list1.resize(12);
    for(list<int>::iterator it=list1.begin();it!=list1.end();it++)
    {
        cout<<*it<<" ";
    }
}
