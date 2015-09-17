#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> vec(3,200);
    int sum=0;
    while(!vec.empty())
    {
        sum=sum+vec.back();
        vec.pop_back();
    }
    cout<<"SUM: "<<sum;
}
