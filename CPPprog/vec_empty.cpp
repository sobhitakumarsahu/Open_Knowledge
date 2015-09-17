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
    int sum=0;
    while(!vec.empty())
    {
        sum=sum+vec.back();
        vec.pop_back();
    }
    cout<<"SUM: "<<sum;
}
