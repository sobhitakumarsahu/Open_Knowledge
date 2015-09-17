#include<iostream>
using namespace std;
int division(int a,int b)
{
    if(b==0)
    {
        throw "Division by Zero";
    }
    return(a/b);
}
int main()
{
    int a=10,b=2;
    double d=0;
    try
    {
        d=division(a,b);
        cout<<d;
    }
    catch(const char *msg)
    {
        cerr<<msg;
    }
}
