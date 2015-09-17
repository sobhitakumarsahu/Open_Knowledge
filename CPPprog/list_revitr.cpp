#include<iostream>
using namespace std;
#include<list>
int main()
{
    list<int> list1;
    for(int i=0;i<5;i++)
    {
        list1.push_back(i);
    }
    for(list<int>::reverse_iterator ritr=list1.rbegin();ritr!=list1.rend();ritr++)
    {
        cout<<*ritr<<" ";
    }
}
