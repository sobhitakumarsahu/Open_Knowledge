#include<iostream>
using namespace std;
class Marks
{
    int intmarks;
    int extmarks;
public:
    void display()
    {
        cout<<"INTMARKS: "<<intmarks<<"EXTMARKS: "<<extmarks;
    }
    Marks()
    {
        intmarks=0;
        intmarks=0;
    }
    Marks(int im,int em)
    {
        intmarks=im;
        extmarks=em;
    }
    Marks operator-(Marks m)
    {
        Marks temp;
        temp.intmarks=intmarks-m.intmarks;
        temp.extmarks=extmarks-m.extmarks;
        return temp;
    }
};
int main()
{
        Marks m1(10,20),m2(30,40);
        Marks m3=m1-m2;
        m3.display();
}
