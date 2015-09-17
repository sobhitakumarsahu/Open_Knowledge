#include<iostream>
using namespace std;
#include<list>
bool single_digit(const int &value){return (value<10);}
struct is_odd
{
    bool operator()(const int &value){return(value%2)==1;}
};
int main()
{
    int arr[5]={10,5,17,40,30};
    list<int> list1(arr,arr+5);
    list1.remove_if(single_digit);
    list1.remove_if(is_odd());
    for(list<int>::iterator it=list1.begin();it!=list1.end();it++)
    {
        cout<<*it<<" ";
    }
}
