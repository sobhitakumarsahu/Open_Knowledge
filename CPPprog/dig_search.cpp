#include<iostream>
using namespace std;
int main()
{
    int num=1312111;
    int digit=1;
    int rem,cnt=0;
    while(num!=0)
    {
        rem=num%10;
        if(rem==digit)
        {
            cnt++;
        }
        num=num/10;
    }
    cout<<cnt<<"No. of times"<<digit<<"found!!";
}
