#include<iostream>
#include<algorithm>
using namespace std;
#include<vector>
int main()
{
    vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec[4]=5;
    for(int i=0;i<vec.size();i++)
    {
        cout<<vec[i];
    }
}
