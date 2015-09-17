#include<iostream>
using namespace std;
#include<algorithm>
#include<map>
int main()
{
    map<char,int> mymap;
    mymap.insert(pair<char,int>('a',100));
    mymap.insert(pair<char,int>('b',200));
    mymap.insert(make_pair('z',2600));
    map<char,int>::iterator itr=mymap.begin();
    mymap.insert(itr,pair<char,int>('c',300));
    itr=mymap.find('z');
    for(itr=mymap.begin();itr!=mymap.end();++itr)
    {
        cout<<(*itr).first<<"=====>"<<(*itr).second<<endl;
    }
}

