#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> vec1(3,100);
    vector<int> vec2(5,200);
    vec1.swap(vec2);
    for(int i=0;i<vec1.size();i++)
    {
        cout<<"VEC1: "<<vec1[i];
    }
    for(int i=0;i<vec2.size();i++)
    {
        cout<<"VEC2: "<<vec2[i];
    }
}
