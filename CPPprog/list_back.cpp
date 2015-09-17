#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int> list1;
    list1.push_back(10);
    while(list1.back()!=0)
    {
        list1.push_back(list1.back()-1);
    }
    for(list<int>::iterator it=list1.begin();it!=list1.end();it++)
    {
        cout<<*it<<" ";
    }
}
