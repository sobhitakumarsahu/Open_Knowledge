#include<iostream>
using namespace std;
int main()
{
    int num;
    int c,k;
    cout<<"Enter a number: ";
    cin>>num;
    for(c=31;c>=0;c--)
    {
        k=num>>c;
     //   cout<<k<<"\n";
       if(k&1)
        {
            cout<<"1"<<c;
        }
        else
        {
            cout<<"0"<<c;
        }

    }
}
