#include<iostream>
using namespace std;
#include<stack>
int main()
{
    stack<int> stack1,stack2;
    for(int i=0;i<5;i++)
    {
        stack1.push(i);
    }
    for(int i=6;i<8;i++)
    {
        stack2.push(i);
    }
    cout<<stack1.size();
    cout<<stack2.size();
    stack1.swap(stack2);
}
