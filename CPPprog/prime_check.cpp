#include<iostream>
using namespace std;
int main()
{
    int num=6,i;
    int flag=0;
    for(i=2;i<=num/2;i++)
    {
        if(num%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        cout<<num<<"is a prime number!!";
    }
    else
    {
        cout<<num<<" is not a prime number";
    }
}
