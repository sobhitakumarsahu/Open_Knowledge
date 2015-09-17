#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int> list1;
    list1.push_back(10);
    list1.push_back(20);
    list1.push_back(30);
    list1.push_back(40);
    list1.push_back(50);
    list1.push_back(60);
    list1.list::emplace(list1.begin(),100,'x');
    list1.emplace(list1.end(),200,'y');
    for(list<int>::iterator it=list1.begin();it!=list1.end();it++)
    {
        cout<<*it<<" ";
    }
}
