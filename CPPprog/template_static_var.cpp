#include<iostream>
using namespace std;
template<typename T>
void fun()
{
        static int i=10;
        cout<<++i<<"\n";
        return;
}
int main()
{
    fun<int>();
    fun<int>();
    fun<double>();
}
