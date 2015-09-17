#include<iostream>
using namespace std;
#include<vector>
int main()
{
    vector<int> vec;
    for(int i=0;i<9;i++)
    {
        vec.push_back(i);
    }
    cout<<"SIZE: "<<vec.size()<<"\n";
    cout<<"Capacity: "<<(int)vec.capacity()<<"\n";
    cout<<"max Size: "<<vec.max_size();
}
