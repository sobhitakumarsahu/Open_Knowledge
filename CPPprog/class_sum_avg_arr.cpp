#include<iostream>
using namespace std;
class arrr
{
    int arr[5]={10,20,30,40,50};
    int i,sum=0;
    int len=sizeof(arr)/sizeof(arr[0]);
    public:
    void sum1();
    void avg1();
};
void arrr::sum1()
{
        int i;
        for(i=0;i<len;i++)
        {
            sum=sum+arr[i];
        }
        cout<<"SUM: "<<sum;
}
void arrr::avg1()
{
    int sum=0;
    int i;
    for(i=0;i<len;i++)
    {
        sum=sum+arr[i];
    }
    cout<<"Avg: "<<sum/5;
}
int main()
{
    arrr obj;
    obj.sum1();
    obj.avg1();
}
