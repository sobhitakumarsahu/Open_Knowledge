#include<iostream>
#include<tr1/unordered_map>
using namespace std;
using namespace std::tr1;
int main()
{
    unordered_map<char,string> m;
       m['s']="Sunday";
    cout<<m['s'];
    unordered_map<char,string>::const_iterator itr;
    itr=m.find('s');
    if(itr!=m.end())
    {
        cout<<*itr;
    }
}
