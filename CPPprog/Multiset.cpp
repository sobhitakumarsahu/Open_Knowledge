#include<iostream>
using namespace std;
#include<set>
#include<algorithm>
int main()
{
    multiset<int> mymulset;
    mymulset.insert(3);
    mymulset.insert(1);
    mymulset.insert(7);
    multiset<int>::iterator it;
    for(it=mymulset.begin();it!=mymulset.end();++it)
    {
        cout<<*it;
    }
    it=mymulset.find(3);
    cout<<*it;
    mymulset.insert(it,9);
    mymulset.insert(it,10);
    cout<<endl;
    for(it=mymulset.begin();it!=mymulset.end();++it)
    {
        cout<<*it;
    }
    mymulset.erase(7);
    cout<<endl;
    for(it=mymulset.begin();it!=mymulset.end();++it)
    {
        cout<<*it;
    }
    mymulset.insert(3);
    for(it=mymulset.begin();it!=mymulset.end();++it)
    {
        cout<<"After inserting dupe. elements"<<*it<<endl;
    }
}
