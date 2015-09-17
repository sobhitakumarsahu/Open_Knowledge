#include<iostream>
using namespace std;
#include<list>
int main()
{
    list<int> list1;
    int sum=0;
    for(int i=0;i<10;i++)
    {
        list1.push_back(i);
    }
    while(!list1.empty())
    {
        sum=sum+list1.front();
        list1.pop_front();

    }
    cout<<"SUM: "<<sum;
}
