#include<iostream>
using namespace std;
int sum=0;
int rev;
int reverse(int num)
{
    if(num)
    {
        rev=num%10;
        sum=sum*10+rev;
        reverse(num/10);
    }
    else
        return sum;
   // return sum;
}
int main()
{
    int num=23424;
    int res=reverse(num);
    cout<<res;
}
