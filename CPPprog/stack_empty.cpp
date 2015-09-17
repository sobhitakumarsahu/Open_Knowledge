#include<iostream>
using namespace std;
#include<stack>
int main()
{
    stack<int> stack1;
    int sum(0);
    for(int i=0;i<=10;i++)
    {
        stack1.push(i);
    }
    while(!stack1.empty())
    {
        sum+=stack1.top();
        stack1.pop();
    }
    cout<<"SUM: "<<sum;
}
