#include<iostream>
using namespace std;
template <class T> class Test
{
public:
    static int count;
    Test()
    {
        count++;
    }
};
template<class T>
int Test<T>::count=0;
int main()
{
    Test<int> a;
    Test<int> b;
    Test<double> c;
    //cout<<"a: "<<Test<int>::count;
    cout<<"b: "<<Test<int>::count;
    cout<<"c: "<<Test<double>::count;

}
