#include<iostream>
using namespace std;
#include<list>
int main()
{
    list<int> list1;
    list1.push_back(10);
    list1.push_back(20);
    cout<<"Begin: "<<*list1.begin();
}
