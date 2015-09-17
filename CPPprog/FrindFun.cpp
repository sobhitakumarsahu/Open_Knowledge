#include<iostream>
using namespace std;
class A
{
    int i;
public:
    friend void f();
};
void f()
{
    A obj;
    obj.i=10;
    cout<<obj.i;
}
int main()
{
    f();
}
