#include<iostream>
#include<algorithm>
using namespace std;
#include<vector>
int main()
{
    vector<int> vec;
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    vector<int>::iterator itr;
    itr=vec.begin();
    itr=itr+2;
    cout<<*itr;
    itr=itr-1;
    cout<<*itr;
    ++itr;
    cout<<*itr;

}
