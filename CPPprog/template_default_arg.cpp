#include<iostream>
using namespace std;
template<class T,class U=char>
class A
{
public:
    T x;
    U y;
    A()
    {
        cout<<"constructor called!!";
    }
};
int main()
{
    A<char> a;
}
