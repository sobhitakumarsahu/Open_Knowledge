#include<iostream>
#include<algorithm>
using namespace std;
#include<unordered_set>
#include<unordered_map>
#include<string>
#include<set>
int main()
{
    unordered_set<int> unset;
    unordered_set<string>::const_iterator itr=unset.find("green");
    if(itr!=unset.end())
    {
        cout<<*itr<<endl;
        unset.insert("yello");
    }
    vector<string> vec ={"purple","orange","violate"};
    unset.insert(vec.begin(),vec.end());
}
