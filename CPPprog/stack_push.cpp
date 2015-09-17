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
    while(!stack1.empty())
    {
        cout<<stack1.top();
        stack1.pop();
    }
}
