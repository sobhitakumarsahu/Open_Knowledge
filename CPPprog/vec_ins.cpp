#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> vec(3,100);
    vector<int>::iterator it;
    it=vec.begin();
    it=vec.insert(it,200);
    vec.insert(it,2,300);
    it=vec.begin();
    vector<int> vec1(2,400);
    vec.insert(it+2,vec1.begin(),vec1.end());
    int arr[]={10,20,30};
    vec.insert(vec.begin(),arr,arr+3);
    for(it=vec.begin();it!=vec.end();it++)
    {
        cout<<*it<<" ";
    }
}
