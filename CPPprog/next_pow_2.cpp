#include<iostream>
using namespace std;
void setPos(int num)
{
    int count=0,res;
    if(num&&!(num&(num-1)))
    {
        cout<<"IN IF"<<num;
    }
    else{
    while(num!=0)
    {
        num=num>>1;
        count++;
    }
    res=1<<count;
    cout<<"RES: "<<res;
    }
}
int main()
{
    int num=16  ;
    setPos(num);
}
