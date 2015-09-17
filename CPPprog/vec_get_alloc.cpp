#include<iostream>
using namespace std;
#include<vector>
int main()
{
    vector<int> vec;
    int *p;
    p=vec.get_allocator().allocate(5);
    for(int i=0;i<5;i++)
    {
        vec.get_allocator().construct(&p[i],i);
    }
    for(int i=0;i<5;i++)
    {
        cout<<p[i];
    }
    for(int i=0;i<5;i++)
    {
        vec.get_allocator().deallocate(p,5);
    }
}
