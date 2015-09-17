#include<iostream>
using namespace std;
#include<list>
int main()
{
    list<int> list1;
    list1.push_back(10);
    list1.push_back(20);
    for (std::list<int>::iterator it=list1.begin() ; it != list1.end(); ++it)
    std::cout<< *it<<" ";
    cout<<"Begin: "<<*list1.begin();
    cout<<"End: "<<*list1.end();
}
