#include<iostream>
using namespace std;
#include<exception>
struct MyException:public exception
{
    const char *what() const throw()
    {
        return"C++ Exception!!";
    }
};
int main()
{
    try{
        throw MyException();
    }
    catch(MyException& e)
    {
        cout<<"My Exception caught!!";
        cout<<e.what();
    }
    catch(exception& e)
    {
        cout<<"Other Errors";
    }
}
