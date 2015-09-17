#include<iostream>
using namespace std;
int factorial(int num)
{
    int f,fact,res;
if(num!=1)
    {
        return num*factorial(num-1);
    }
}
int main()
{
    int num=5,res;
    res=factorial(num);
    cout<<res;
}
