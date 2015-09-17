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
    cout<<list1.size();
}
