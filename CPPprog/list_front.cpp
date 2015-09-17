#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int> list1;
    list1.push_back(40);
    list1.push_back(20);
    cout<<"back: "<<list1.back()<<"\n";
    cout<<"front: "<<list1.front()<<"\n";
    list1.front()-=list1.back();
    cout<<"FRONT:"<<list1.front();
}
