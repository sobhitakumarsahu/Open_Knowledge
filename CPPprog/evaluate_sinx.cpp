#include<iostream>
using namespace std;
int fact(int num)
{
    if(num!=1)
    {
        return num*fact(num-1);
    }
}
int power(int x,int i)
{
    int res=1,j;
    for(j=0;j<i;j++)
    {
        res=res*x;
    }
    return res;
}
void evaluate_sin(int x)
{
    double res=0;
    int i;
    for(i=1;i<7;i=i+2)
    {
        res=res+power(x,i)/fact(i);
    }
    cout<<"RES of sinx()"<<res;
}
int main()
{
    int x;
    cout<<"Enter sinx value: ";
    cin>>x;
    evaluate_sin(x);
}
