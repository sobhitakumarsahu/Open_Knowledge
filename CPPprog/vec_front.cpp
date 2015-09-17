#include<iostream>
using namespace std;
#include<vector>
int main()
{
    vector<int> vec;
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(50);
    vec.front()-=vec.back();
    cout<<"front: "<<vec.front();
}
