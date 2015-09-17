#include<iostream>
using namespace std;
#include<stack>
int main()
{
    stack<int> stack1;
    for(int i=0;i<5;i++)
    {
        stack1.push(i);
    }
    cout<<"SIZE: "<<stack1.size();
}
