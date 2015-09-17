#include<iostream>
using namespace std;
#include<list>
#include<cmath>
bool same_integral_part(double first,double second)
{
    return(int(first)==int(second));
}
struct is_near
{
    bool operator()(double first,double second)
    {
        cout<<"FIRST: "<<first;
        cout<<"SECOND: "<<second;
        return(fabs(first-second)<5.0);
    }
};
int main()
{
    double arr[10]={12.15,  2.72, 73.0,  12.77,  3.14, 12.77, 73.35, 72.25, 15.3,  72.25};
    list<double> list1(arr,arr+10);
    list1.sort();
    list1.unique();
    list1.unique(same_integral_part);
    list1.unique(is_near());
}
