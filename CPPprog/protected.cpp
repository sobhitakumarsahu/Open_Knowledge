#include<iostream>
using namespace std;
class A
{
protected:
    int roll;
};
int main()
{
    A obj;
    obj.roll=1;
    cout<<"Roll: "<<obj.roll;

};
