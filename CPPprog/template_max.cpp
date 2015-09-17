#include<iostream>
using namespace std;
template <typename T>
T myMax(T x,T y)
{
    return(x>y)?x:y;
}
int main()
{
    cout<<myMax<int>(3,7)<<"\n";
    cout<<myMax<double>(10.0,7.0)<<"\n";
    cout<<myMax<char>('g','h')<<"\n";
}
