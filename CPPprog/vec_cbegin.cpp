#include<iostream>
using namespace std;
#include<vector>
int main()
{
    vector<int> vec;
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    vec.push_back(40);
    vec.push_back(50);
    for(int it=vec.cbegin();it!=vec.cend();it++)
    {
        cout<<*it;
    }
}
