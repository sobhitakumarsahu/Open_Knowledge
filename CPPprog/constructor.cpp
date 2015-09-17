#include<iostream>
using namespace std;
class A
{
public:
    int c;
    int d;
    A(int a,int b)
    {
        c=a;
        d=b;
    }
    A()
    {
        cout<<"Default Constructor executed!!"<<endl;
    }
    A(const A &obj3)
    {
        c = obj3.c;
        d = obj3.d;
    }
    int getc(){return c;}
    int getd(){return d;}
    void show()
    {
    cout<<c<<endl;
    cout<<d<<endl;
    }
};
int main()
{
    A obj(10,20);
    A obj1;
    obj.show();
    A obj3 = obj1;
    obj3.show();
    cout<<obj3.getc()<<obj3.getd();
}
