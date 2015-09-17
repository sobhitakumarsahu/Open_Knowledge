#include<iostream>
using namespace std;
#include<set>
#include<algorithm>
int main()
{
    set<int> myset;
    myset.insert(3);
    myset.insert(1);
    myset.insert(7);
    set<int>::iterator it;
    for(it=myset.begin();it!=myset.end();++it)
    {
        cout<<*it;
    }
    it=myset.find(3);
    cout<<*it;
    myset.insert(it,9);
    myset.insert(it,10);
    cout<<endl;
    for(it=myset.begin();it!=myset.end();++it)
    {
        cout<<*it;
    }
    myset.erase(7);
    cout<<endl;
    for(it=myset.begin();it!=myset.end();++it)
    {
        cout<<*it;
    }

}
