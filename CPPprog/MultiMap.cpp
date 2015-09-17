#include<iostream>
using namespace std;
#include<algorithm>
#include<map>
int main()
{
    multimap<char,int> mymulmap;
    mymulmap.insert(pair<char,int>('a',100));
    mymulmap.insert(pair<char,int>('b',200));
    mymulmap.insert(pair<char,int>('b',200));
    mymulmap.insert(make_pair('z',2600));
    multimap<char,int>::iterator itr=mymulmap.begin();
//    (*itr).first='e'; //since pair<const char,const int>, so data not modifiable.
    mymulmap.insert(itr,pair<char,int>('c',300));
    itr=mymulmap.find('z');
    for(itr=mymulmap.begin();itr!=mymulmap.end();++itr)
    {
        cout<<(*itr).first<<"=====>"<<(*itr).second<<endl;
    }
}

