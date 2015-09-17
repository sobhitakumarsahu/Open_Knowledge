#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> vec;
    vec.push_back(2);
    vec.push_back(1);
    vec.push_back(3);
    vector<int>::iterator itr1=vec.begin();
    vector<int>::iterator itr2=vec.end();
    sort(itr1,itr2);
    for(vector<int>::iterator itr=itr1;itr!=itr2;++itr)
    {
        cout<<*itr;
    }
    cout<<endl;
    cout<<*vec.begin()<<endl;
    cout<<*vec.end()<<endl;
}
