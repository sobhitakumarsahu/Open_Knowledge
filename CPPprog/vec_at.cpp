#include<iostream>
using namespace std;
#include<vector>
int main()
{
    vector<int> vec(10);
    for(int i=0;i<10;i++)
    {
        vec.at(i)=i;
    }
    for(int i=0;i<vec.size();i++)
    {
        cout<<vec.at(i);
    }
    vec.at(5)=50;
    for(int i=0;i<vec.size();i++)
    {
        cout<<vec.at(i);
    }
}
