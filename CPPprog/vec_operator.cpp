#include<iostream>
using namespace std;
#include<vector>
int main()
{
    vector<int> vec(3,0);
    vector<int> vec1(5,0);
    vec1=vec;
    vec=vector<int>();
    cout<<"SIZE OF VEC: "<<vec.size();
    cout<<"SIZE OF VEC1: "<<vec1.size();
}
