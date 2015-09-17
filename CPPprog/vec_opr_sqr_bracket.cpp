#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> vec(10);
    vector<int>::size_type sz=vec.size();
    for(int i=0;i<sz;i++)
    {
        vec[i]=i;
    }
    for(int i=0;i<sz/2;i++)
    {
        int temp;
        temp=vec[sz-1-i];
        vec[sz-1-i]=vec[i];
        vec[i]=temp;
    }
    for(int i=0;i<sz;i++)
    {
        cout<<vec[i]<<"";
    }
}
