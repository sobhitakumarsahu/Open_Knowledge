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
    for(vector<int>::iterator it=vec.begin();it!=vec.end();it++)
    {
        cout<<*it<<" ";
    }
    vec.clear();
    vec.push_back(101);
    vec.push_back(202);
    cout<<"\n";
    for(int i=0;i<vec.size();i++)
    {
        cout<<vec[i]<<" ";
    }

}
