#include<iostream>
using namespace std;
inline int max(int x,int y)
{
    return(x>y)?x:y;
}
int main()
{
        cout<<"Max(10,20)"<<max(10,20);
        cout<<"Max(30,40)"<<max(30,40);
}
