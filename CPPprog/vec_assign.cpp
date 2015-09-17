#include<iostream>
using namespace std;
#include<vector>
int main()
{
    vector<int> first,second;
//    vector<int> second;
    first.assign(7,100);
    vector<int>::iterator it;
    it=first.begin()+1;
    second.assign(it,first.end()-1);
    cout<<"first SIZE: "<<first.size();
    cout<<"second SIZE: "<<second.size();
}