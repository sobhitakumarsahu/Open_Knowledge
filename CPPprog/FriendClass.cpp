#include<iostream>
using namespace std;
class A
{
    int i;
    public:
    friend class B;
    A():i(0){};
    void print()
    {
        cout<<i;
    }
};
class B
{
public:
    void change(A& obj,int x)
    {
        obj.i=x;
    }
};
int main()
{
    A obj;
    B obj1;
    obj.print();
    obj1.change(obj,5);
    obj.print();
}
