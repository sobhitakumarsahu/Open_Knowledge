#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>
int main()
{
    vector<int> vec;
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    vec.push_back(40);
    vec.push_back(50);
    vector<int> itr;
    itr=itr+2;
    cout<<*itr;
    itr=itr-1;
    cout<<vec[itr];
    for(int i=0;i<vec.size();i++)
    {
        cout<<vec[i]<<endl;
    }
}
