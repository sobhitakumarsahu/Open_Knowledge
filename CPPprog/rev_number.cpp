#include<iostream>
using namespace std;
int main()
{
    int num=1214;
    int sum=0,rem;
    while(num!=0)
    {
        rem=num%10;
        sum=sum*10+rem;
        num=num/10;
    }
    cout<<"reverced number: "<<sum;
}
