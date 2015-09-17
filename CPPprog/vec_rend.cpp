#include<iostream>
using namespace std;
#include<vector>
int main()
{
    vector<int> vec(5);
    vector<int>::reverse_iterator it=vec.rbegin();
    int i=0;
    for(it=vec.rbegin();it!=vec.rend();++it)
    {
        *it=++i;
    }
    for(vector<int>::iterator it=vec.begin();it!=vec.end();it++)
    {
        cout<<*it;
    }
}
