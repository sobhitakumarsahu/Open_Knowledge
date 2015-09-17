#include<iostream>
using namespace std;
template<class T,class U>
class A
{
    T x;
    T y;
public:
    A(){cout<<"constructor called!!"<<"\n";}
};
int main()
{
    A<char,char> a;
    A<int,double> b;
}
