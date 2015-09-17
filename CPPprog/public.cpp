#include<iostream>
using namespace std;
class A
{
public:
    int roll;
    string name;
    double marks;
};
int main()
{
    A obj;
    obj.roll=1;
    obj.name="Sobhita Kumar Sahu";
    obj.marks=100;
    cout<<"Roll: "<<obj.roll<<"Name: "<<obj.name<<"Marks: "<<obj.marks;
}
